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

#ifndef ROUTER_H_
#define ROUTER_H_

#include <string.h>
#include <omnetpp.h>
#include <configNetwork_m.h>

class router : public cSimpleModule{
protected:
    bool configured;

public:
    router();
    virtual ~router();
    virtual void forwardMessage(ConfigNetwork *msg, int destID=0);
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void broadcastMessage(ConfigNetwork *msg);
    virtual bool isConfigured();
    virtual void setConfigured(bool conf);
};

Define_Module(router);

#endif /* ROUTER_H_ */
