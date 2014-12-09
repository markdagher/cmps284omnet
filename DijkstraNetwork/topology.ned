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

package dijkstranetwork;

network dijkstra
{
    submodules:
        mainNMU: Nmu;
        routerNode[14]: node;

    connections:
         routerNode[0].mainGate[0] <--> mainNMU.gate;
         routerNode[0].mainGate[1] <--> routerNode[1].mainGate[0];
         routerNode[0].mainGate[2] <--> routerNode[8].mainGate[0];
         
         routerNode[1].mainGate[1] <--> routerNode[2].mainGate[0];
         routerNode[1].mainGate[2] <--> routerNode[3].mainGate[0];
         
         routerNode[2].mainGate[1] <--> routerNode[5].mainGate[0];
         
         routerNode[3].mainGate[1] <--> routerNode[4].mainGate[0];
         routerNode[3].mainGate[2] <--> routerNode[10].mainGate[0];
         
         routerNode[4].mainGate[1] <--> routerNode[5].mainGate[1];
         routerNode[4].mainGate[2] <--> routerNode[6].mainGate[0];
         
         routerNode[5].mainGate[2] <--> routerNode[7].mainGate[0];
         routerNode[5].mainGate[3] <--> routerNode[12].mainGate[0];
         
         routerNode[6].mainGate[1] <--> routerNode[8].mainGate[1];
         
         routerNode[7].mainGate[1] <--> routerNode[9].mainGate[1];
         
         routerNode[8].mainGate[2] <--> routerNode[9].mainGate[0];
         
         routerNode[9].mainGate[2] <--> routerNode[11].mainGate[0];
         routerNode[9].mainGate[3] <--> routerNode[13].mainGate[0];
         
         routerNode[10].mainGate[1] <--> routerNode[13].mainGate[1];
         
         routerNode[11].mainGate[1] <--> routerNode[12].mainGate[1];
         
         routerNode[12].mainGate[2] <--> routerNode[13].mainGate[2];
 		 
}