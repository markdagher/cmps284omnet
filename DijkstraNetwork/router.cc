//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "C:router.h"


router::router() {
    // TODO Auto-generated constructor stub
    this->setConfigured(false);
}

router::~router() {
    // TODO Auto-generated destructor stub
}


void router::initialize()
{

    //    if (getIndex()==0)
    //    {
    //        // Boot the process scheduling the initial message as a self-message.
    //        char msgname[20];
    //        sprintf(msgname, "Router %d", getIndex());
    //        cMessage *msg = new cMessage(msgname);
    //        scheduleAt(0.0, msg);
    //    }
}

void router::handleMessage(cMessage *msg)
{
    int parentIndex = this->getParentModule()->getIndex();

    //check if its a config msg or not

    //for the weights, create a Map with Key gate name and Value the link weight ==> creates Weight table to use as reference

    ConfigNetwork *conf = check_and_cast<ConfigNetwork *>(msg);

    int destID = conf->getDestinationID();

    std::string weights = conf->getPathsWeight();

    // createForwardingTable();

    if(!configured){
        broadcastMessage(conf);
    }

    if(parentIndex == destID){
        EV << "Message Has arrived to destination" << endl;
    }
    else{
        int newDest = conf->getSourceID() + 1;

        //        forwardMessage(conf, newDest);
    }
}

void router::forwardMessage(ConfigNetwork *msg, int gateIndex)
{
    // In this example, we just pick a random gate to send it on.
    // We draw a random number between 0 and the size of gate `out[]'.

    int n = gateSize("nodeGate");
    //    int k = intuniform(1,n-1);

    EV << "Forwarding message " << msg << " on port out[" << gateIndex << "]\n";
    send(msg, "nodeGate$o", gateIndex);
}

void router::broadcastMessage(ConfigNetwork *msg)
{
    for (cModule::GateIterator i(this->getParentModule()); !i.end(); i++)
    {
        cGate *gate = i();
        if(gate->isConnectedOutside()){
            if((msg->getArrivalGate()->getIndex() != gate->getIndex()) && (gate->getType() == cGate::OUTPUT)){
                ConfigNetwork *broadcastMsg = new ConfigNetwork(*msg);
                forwardMessage(broadcastMsg, gate->getIndex());
            }
        }
    }

    this->setConfigured(true);
}


bool router::isConfigured(){
    return this->configured;
}

void router::setConfigured(bool conf){
    this->configured = conf;
}
