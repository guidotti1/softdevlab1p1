#ifndef DATALOOKUP_H
#define DATALOOKUP_H

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "dataEntry.h"
using namespace std;

class dataLookup
{
public :
    //the data map maps the first variable, pageID to a data entry. each character's pageID is unique so there will be no overlapping.
    map<string, dataEntry> dataMap;
    //this nameMap allows the user to find characters based on name, whether it be first, last, nickname, or any word in the vector name.
    //each unique name is mapped to a vector of pageIDs, then the user sees all characters with that name and can pick one to look at
    //it is also used in the >1 word name lookup
    map<string, vector<string> > nameMap;
    //this yearMap similarly allows the user to find characters based on the year that they were introduced
    map<string, vector<string> > yearMap;
    //this dataLookup constructor takes in the .csv file and creates the dataMap
    dataLookup(string fileName);
    //createYearAndNameMaps creates the two above maps to allow for the user to search by name/year
    void createYearAndNameMaps();
    //userSearch is a function that allows the user to search by name (one word), year introduced, or name (>1 word in any order)
    void userSearch();

private:

};

//#include "dataLookup.cpp"
#endif
