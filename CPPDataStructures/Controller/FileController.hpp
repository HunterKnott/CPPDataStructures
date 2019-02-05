//
//  FileController.hpp
//  CPPDataStructures
//
//  Created by Knott, Hunter on 2/5/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include <stdio.h>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);
};

#endif /* FileController_hpp */
