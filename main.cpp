#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <map>
#include <sstream>
#include <vector>
#include <iterator>
#include <string>
#include "dataEntry.h"
#include "dataLookup.h"

using namespace std;

int main()
{
    //main
    //passes input file name to dataLookup constructor, constructs the map indexed by PID
    string fileName = "input.txt";
    dataLookup ourMap(fileName);
    //create year and name maps used for user lookup
    ourMap.createYearAndNameMaps();
    //allows user to repeat
    bool repeat = true;
    while (repeat)
        {
        ourMap.userSearch();
        cout << "Enter 0 and press return to quit. Enter any other character to search again" << endl;
        char repeatChar;
        cin >> repeatChar;
        if (repeatChar == '0')
            {
            repeat = false;
            }
        }
return 0;
}





