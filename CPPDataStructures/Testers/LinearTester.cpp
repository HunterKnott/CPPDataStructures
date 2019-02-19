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
}
