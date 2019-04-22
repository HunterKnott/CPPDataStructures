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
    //testLinear();
    //testFiles();
    //useLinkedLists();
    //GraphTester test;
    //test.testGraphs();
    BinaryTreeTester treeTest;
    treeTest.doTreeStuff();
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

void Controller :: useLinkedLists()
{
    LinkedList<int> intList;
    for(int i = 1; i < 6; i++)
    {
        intList.add(i);
    }
    
    for(int i = 0; i < intList.getSize(); i++)
    {
        cout << intList.getFromIndex(i) << "";
    }
    cout << "\n";
    
    vector<string> wordVector = {"This ", "is ", "in ", "a ", "list"};
    LinkedList <string> stringList;
    for(int i = 0; i < wordVector.size(); i++)
    {
        stringList.add(wordVector[i]);
    }
    
    for(int i = 0; i < stringList.getSize(); i++)
    {
        cout << stringList.getFromIndex(i);
    }
    cout << "\n";
    
    LinkedList<CrimeData> dataList = FileController :: readDataToList("/Users/hkno9012/Documents/BackupCPPDataStructures/CPPDataStructures/Resources/crime.csv");
    for(int i = 10; i < 20; i++)
    {
        cout << dataList.getFromIndex(i);
    }
}
