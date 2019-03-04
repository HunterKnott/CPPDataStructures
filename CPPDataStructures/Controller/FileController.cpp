//
//  FileController.cpp
//  CPPDataStructures
//
//  Created by Knott, Hunter on 2/5/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path
    if(dataFile.is_open())
    {
        //Keep reading until you are at the end of the file
        while(!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\n');
            //Exclude header row
            if(rowCount != 0)
            {
                //Create a CrimeData instance from the line. Exlude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return crimeVector;
}

vector<Music> FileController :: musicDataToVector(string filename)
{
    vector<Music> musicVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path
    if(dataFile.is_open())
    {
        //Keep reading until you are at the end of the file
        while(!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\r');
            //Exclude header row
            if(rowCount != 0)
            {
                //Create a Music instance from the line. Exlude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return musicVector;
}

LinkedList<CrimeData> FileController :: readDataToList(string fileName)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //If the file exists at that path
    if(dataFile.is_open())
    {
        //Keep reading until you are at the end of the file
        while(!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\r');
            //Exclude header row
            if(rowCount != 0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return crimes;
}

LinkedList<Music> FileController :: musicDataToList(string fileName)
{
    LinkedList<Music> musicList;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    //If the file exists at that path
    if(dataFile.is_open())
    {
        //Keep reading until you are at the end of the file
        while(!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\n');
            //Exclude header row
            if(rowCount != 0)
            {
                //Create a Music instance from the line. Exclude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicList.add(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return musicList;
}
