//
//  Controller.cpp
//  CPPDataStructures
//
//  Created by Knott, Hunter on 1/28/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Hello not world" << endl;
    usingNodes();
}

void Controller :: usingNodes()
{
    LinearNode<int> mine(5);
    LinearNode<string> wordHolder("Words");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("Replace text");
    cout << wordHolder.getData() << endl;
}
