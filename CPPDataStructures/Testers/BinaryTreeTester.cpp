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
    intTestTree.insert(863);
    intTestTree.insert(8);
    intTestTree.insert(44);
    intTestTree.insert(90);
    intTestTree.insert(852);
    intTestTree.insert(2);
    intTestTree.insert(654);
    intTestTree.insert(247);
    intTestTree.insert(98);
    intTestTree.insert(11);
    
    intTestTree.inOrderTraversal();
    cout << endl;
    intTestTree.preOrderTraversal();
    cout << endl;
    intTestTree.postOrderTraversal();
    cout << endl;
    
    stringTestTree.insert("Do");
    stringTestTree.insert("or");
    stringTestTree.insert("do");
    stringTestTree.insert("not");
    stringTestTree.insert("there");
    stringTestTree.insert("is");
    stringTestTree.insert("no");
    stringTestTree.insert("try");
    
    stringTestTree.inOrderTraversal();
    cout << endl;
    stringTestTree.preOrderTraversal();
    cout << endl;
    stringTestTree.postOrderTraversal();
    cout << endl;
}
