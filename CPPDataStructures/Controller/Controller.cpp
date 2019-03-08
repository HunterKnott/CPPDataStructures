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
    //usingNodes();
    testLinear();
    //testFiles();
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

void Controller :: testLinear()
{
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}

void Controller :: testFiles()
{
    vector<Music> musicVector = FileController :: musicDataToVector("/Users/hkno9012/Documents/CPPDataStructures/CPPDataStructures/Resources/music.csv");
    for(int i = 234; i < 256; i++)
    {
        cout << i << ": contents are: " << musicVector[i] << endl;
    }
}
