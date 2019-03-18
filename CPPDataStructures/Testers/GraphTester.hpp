//
//  GraphTester.hpp
//  BackupCPPDataStructures
//
//  Created by Knott, Hunter on 3/18/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include "../Model/NonLinear/Graph.hpp"
#include <iostream>

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
public:
    void testGraphs();
};

template <class Type>
Graph<Type> :: Graph()
{
    this->vertexCount = 0;
    
    for(int index = 0; index < MAXIMUM; index++)
    {
        int * row = weightCostMatrix[index];
        std::fill_n(row, MAXIMUM, 0);
    }
}

#endif /* GraphTester_hpp */
