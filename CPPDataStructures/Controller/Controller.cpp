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
    //usingNodes();
    testLinear();
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
    /*vector<CrimeData> badActions = FileController :: readCrimeDataToVector("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/CrimeData.cpp");
    vector<Music> tunes = FileController :: musicDataToVector("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/music.csv");
    for(int i = 234; i < 256; i++)
    {
        cout << i << ": contents are: " << badActions[i] << endl;
    }*/
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}
