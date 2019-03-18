//
//  Controller.hpp
//  CPPDataStructures
//
//  Created by Knott, Hunter on 1/28/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "FileController.hpp"
#include "../Testers/LinearTester.hpp"
#include "../Testers/GraphTester.hpp"

using namespace std;

class Controller
{
private:
    void usingNodes();
    void testLinear();
    void testFiles();
    void useLinkedLists();
    void testGraphs();
public:
    void start();
};

#endif /* Controller_hpp */
