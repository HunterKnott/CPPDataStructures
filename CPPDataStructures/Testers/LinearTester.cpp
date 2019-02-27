//
//  LinearTester.cpp
//  CPPDataStructures
//
//  Created by Knott, Hunter on 2/13/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerSTL.startTimer();
    crimes[randomIndex];
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL random retrieval: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    randomIndex = rand() % musicList.getSize();
    
    musicSTL.startTimer();
    tunez[randomIndex];
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    musicList.getFromIndex(randomIndex);
    musicOOP.stopTimer();
    
    cout << "This is the STL random retrieval: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
}

void LinearTester :: testVsStack()
{
    Timer crimeTimerStack, crimeTimerOOP, musicStack, musicOOP;
    
    crimeTimerStack.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/crime.csv");
    crimeTimerStack.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    crimeTimerStack.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerStack.getTimeInMicroseconds() << " microseconds" << endl;
    
    
    musicStack.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/music.csv");
    musicStack.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    musicStack.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicStack.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerStack.resetTimer();
    musicOOP.resetTimer();
    musicStack.resetTimer();
    
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerStack.startTimer();
    crimes[randomIndex];
    crimeTimerStack.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "This is the Stack random retrieval: " << endl;
    crimeTimerStack.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerStack.getTimeInMicroseconds() << " microseconds" << endl;
    
    randomIndex = rand() % musicList.getSize();
    
    musicStack.startTimer();
    tunez[randomIndex];
    musicStack.stopTimer();
    
    musicOOP.startTimer();
    musicList.getFromIndex(randomIndex);
    musicOOP.stopTimer();
    
    cout << "This is the Stack random retrieval: " << endl;
    musicStack.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicStack.getTimeInMicroseconds() << " microseconds" << endl;
    
    Stack<CrimeData> testedCrimesStack;
    for(int i = 0; i < 10; i++)
    {
        testedCrimesStack.push(crimes[i]);
    }
}

void LinearTester :: testVsQueue()
{
    Timer crimeTimerQueue, crimeTimerOOP, musicQueue, musicOOP;
    
    crimeTimerQueue.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/crime.csv");
    crimeTimerQueue.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    crimeTimerQueue.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerQueue.getTimeInMicroseconds() << " microseconds" << endl;
    
    
    musicQueue.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/music.csv");
    musicQueue.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    musicQueue.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicQueue.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerQueue.resetTimer();
    musicOOP.resetTimer();
    musicQueue.resetTimer();
    
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerQueue.startTimer();
    crimes[randomIndex];
    crimeTimerQueue.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "This is the Queue random retrieval: " << endl;
    crimeTimerQueue.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerQueue.getTimeInMicroseconds() << " microseconds" << endl;
    
    randomIndex = rand() % musicList.getSize();
    
    musicQueue.startTimer();
    tunez[randomIndex];
    musicQueue.stopTimer();
    
    musicOOP.startTimer();
    musicList.getFromIndex(randomIndex);
    musicOOP.stopTimer();
    
    cout << "This is the Queue random retrieval: " << endl;
    musicQueue.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicQueue.getTimeInMicroseconds() << " microseconds" << endl;
}

void LinearTester :: testVsDouble()
{
    Timer crimeTimerDouble, crimeTimerOOP, musicDouble, musicOOP;
    
    crimeTimerDouble.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/crime.csv");
    crimeTimerDouble.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    crimeTimerDouble.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerDouble.getTimeInMicroseconds() << " microseconds" << endl;
    
    
    musicDouble.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/music.csv");
    musicDouble.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/hkno9012/Documents/C++Projects/CPPDataStructures/CPPDataStructures/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    musicDouble.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicDouble.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerDouble.resetTimer();
    musicOOP.resetTimer();
    musicDouble.resetTimer();
    
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerDouble.startTimer();
    crimes[randomIndex];
    crimeTimerDouble.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "This is the Double random retrieval: " << endl;
    crimeTimerDouble.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerDouble.getTimeInMicroseconds() << " microseconds" << endl;
    
    randomIndex = rand() % musicList.getSize();
    
    musicDouble.startTimer();
    tunez[randomIndex];
    musicDouble.stopTimer();
    
    musicOOP.startTimer();
    musicList.getFromIndex(randomIndex);
    musicOOP.stopTimer();
    
    cout << "This is the Double random retrieval: " << endl;
    musicDouble.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicDouble.getTimeInMicroseconds() << " microseconds" << endl;
}
