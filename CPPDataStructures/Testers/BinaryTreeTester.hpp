//
//  BinaryTreeTester.hpp
//  BackupCPPDataStructures
//
//  Created by Knott, Hunter on 4/12/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/NonLinear/BinarySearchTree.hpp"

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void treeStuff();
};

#endif /* BinaryTreeTester_hpp */
