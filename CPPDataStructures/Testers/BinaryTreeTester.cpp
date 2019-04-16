//
//  BinaryTreeTester.cpp
//  BackupCPPDataStructures
//
//  Created by Knott, Hunter on 4/12/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: doTreeStuff()
{
    testTree.insert(654);
    testTree.insert(8);
    testTree.insert(44);
    testTree.insert(90);
    testTree.insert(852);
    testTree.insert(2);
    testTree.insert(654);
    testTree.insert(247);
    testTree.insert(98);
    testTree.insert(11);
    
    testTree.inOrderTraversal();
    cout << endl;
    testTree.preOrderTraversal();
    cout << endl;
    testTree.postOrderTraversal();
}
