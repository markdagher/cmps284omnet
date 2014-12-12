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

#include "router.h"


router::router() {
    // TODO Auto-generated constructor stub
    this->setConfigured(false);
}

router::~router() {
    // TODO Auto-generated destructor stub
}


void router::initialize()
{
}

void router::handleMessage(cMessage *msg)
{
    int parentIndex = this->getParentModule()->getIndex();

    //check if its a config msg or not

    ConfigNetwork *conf;

    try{
        if(!configured){
            conf = check_and_cast<ConfigNetwork *>(msg);

            generateForwardingTable(conf);

            broadcastMessage(conf);
        }
    }
    catch(cRuntimeError e){
        //something that will forward message to other routers
    }

    //for the weights, create a Map with Key gate name and Value the link weight ==> creates Weight table to use as reference



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

void router::generateForwardingTable(ConfigNetwork *conf){



    //Int array that will hold the indexes of the nodes visited by Dijkstra (represents N');
    int visitedNodes[14];

    //Pair that will represent the pair (D(v), P(v))
    std::pair<int, std::string> costNPred;

    //Pair that will represent the mapping of the destination to it's shortest path
    std::pair<std::pair<int, std::string>, std::string> costToDest;

    //Set that will hold the shortest paths for all the nodes
    std::set<std::pair<std::pair<int, std::string>, std::string>> nodePaths;

    visitedNodes[0] = this->getParentModule()->getIndex();

    for (cModule::GateIterator i(this->getParentModule()); !i.end(); i++)
    {
        std::string nodeInfo = "ngTng";
        cGate *gate = i();
        if(gate->getType() == cGate::OUTPUT){
            if(gate->getNextGate()->getOwnerModule()->getIndex() == visitedNodes[0]){
                nodeInfo.insert(1, std::to_string(this->getParentModule()->getIndex()));
                nodeInfo.insert(3, std::to_string(gate->getIndex()));
                nodeInfo.insert(5, std::to_string(gate->getNextGate()->getOwnerModule()->getIndex()));
                nodeInfo.insert(7, std::to_string(gate->getNextGate()->getIndex()));
                getLinkWeight(nodeInfo, conf);
            }
        }
    }
}

int router::getLinkWeight(std::string linkInfo, ConfigNetwork *conf ){

    std::map<std::string, int> weights;

    weights.insert(std::pair<std::string, int>("n0g1Tn1g0", 1));
    weights.insert(std::pair<std::string, int>("n0g2Tn8g0", 2));
    weights.insert(std::pair<std::string, int>("n1g1Tn2g0", 3));
    weights.insert(std::pair<std::string, int>("n1g2Tn3g0", 4));
    weights.insert(std::pair<std::string, int>("n2g1Tn5g0", 5));
    weights.insert(std::pair<std::string, int>("n3g1Tn4g0", 6));
    weights.insert(std::pair<std::string, int>("n3g1Tn10g0", 7));
    weights.insert(std::pair<std::string, int>("n4g1Tn5g1", 8));
    weights.insert(std::pair<std::string, int>("n4g2Tn6g0", 9));
    weights.insert(std::pair<std::string, int>("n5g2Tn7g0", 10));
    weights.insert(std::pair<std::string, int>("n5g3Tn12g0", 11));
    weights.insert(std::pair<std::string, int>("n6g1Tn8g1", 12));
    weights.insert(std::pair<std::string, int>("n7g1Tn9g1", 13));
    weights.insert(std::pair<std::string, int>("n8g2Tn9g0", 14));
    weights.insert(std::pair<std::string, int>("n9g2Tn11g0", 15));
    weights.insert(std::pair<std::string, int>("n9g3Tn13g0", 16));
    weights.insert(std::pair<std::string, int>("n10g1Tn13g1", 17));
    weights.insert(std::pair<std::string, int>("n11g1Tn12g1", 18));
    weights.insert(std::pair<std::string, int>("n12g2Tn13g2", 19));

    int linkNumber = weights.find(linkInfo)->second;

    switch (linkNumber) {

    case (1):
            return conf->getN0g1Tn1g0();
    break;
    case (2):
            return conf->getN0g2Tn8g0();
    break;
    case (3):
            return conf->getN1g1Tn2g0();
    break;

    case (4):
            return conf->getN1g2Tn3g0();
    break;

    case (5):
            return conf->getN2g1Tn5g0();
    break;

    case (6):
            return conf->getN3g1Tn4g0();
    break;

    case (7):
            return conf->getN3g1Tn10g0();
    break;

    case (8):
            return conf->getN4g1Tn5g1();
    break;

    case (9):
            return conf->getN4g2Tn6g0();
    break;

    case (10):
            return conf->getN5g2Tn7g0()  ;
    break;

    case (11):
            return conf->getN5g3Tn12g0();
    break;

    case (12):
            return conf->getN6g1Tn8g1();
    break;

    case (13):
            return conf->getN7g1Tn9g1();
    break;

    case (14):
            return conf->getN8g2Tn9g0();
    break;

    case (15):
            return conf->getN9g2Tn11g0();
    break;

    case (16):
            return conf->getN9g3Tn13g0();
    break;

    case (17):
            return conf->getN10g1Tn13g1();
    break;

    case (18):
            return conf->getN11g1Tn12g1();
    break;

    case (19):
            return conf->getN12g2Tn13g2();
    break;

    default:
        return -1;
        break;
    }
}

bool router::isConfigured(){
    return this->configured;
}

void router::setConfigured(bool conf){
    this->configured = conf;
}
