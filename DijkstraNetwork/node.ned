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

module node
{
    gates:
        inout mainGate[4] @loose;

    submodules:
        router: router;
        generator: trafficGen;
    connections:
        generator.to_out --> router.fromGenerator;
        mainGate[0] <--> router.nodeGate[0];
        mainGate[1] <--> router.nodeGate[1];
        mainGate[2] <--> router.nodeGate[2];
        mainGate[3] <--> router.nodeGate[3];


}
