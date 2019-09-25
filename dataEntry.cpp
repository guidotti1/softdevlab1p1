#include "dataEntry.h"
#include "extraFunctions.h"

dataEntry::dataEntry()
{
    //default constructor initializes each characteristic to the empty string
    pageID="";
    ID="";
    align="";
    eye="";
    hair="";
    sex="";
    gsm="";
    alive="";
    appearances="";
    firstAppearance="";
    year="";

}

dataEntry::dataEntry(vector<string> row, bool emptyYearNonClass)
{
        //constructor taking a row of words separated by commas
        //each characteristic of a dataEntry is initialized to a certain position in the vector of strings based on where that data occurs in the .csv file
        pageID = row[0];
        removeSpecialCharacters(row[1]);
        vector<string> fullName;
        separateWords(row[1], fullName);
        name = fullName;
        ID = row[3];
        align = row[4];
        eye = row[5];
        hair = row[6];
        sex = row[7];
        gsm = row[8];
        alive = row[9];
        appearances = row[10];
        firstAppearance = row[11];
        //I encountered errors if the last column, year, is empty
        //to fix this we just set it to the empty string if emptyYear is true
        if (emptyYearNonClass)
            {
            year = "";
            emptyYear = true;
            }
        else
            {
            year = row[12];
            }
}

ostream& operator<<(ostream&os, const dataEntry& data)
{
    //Outputs character's name word by word
    os << "This character's full name  is: ";
    for (int r = 0; r < data.name.size(); r++)
        {
        os << data.name[r] << " ";
        }
    os << endl;
    //if all of these characteristics are not empty then we will output them
    if (data.align != "")
        {
        os << "This character's alignment is: " << data.align << endl;
        }
    if (data.eye != "")
        {
        os << "This character's eye color is: " << data.eye << endl;
        }
    if (data.hair != "")
        {
        os << "This character's hair color is: " << data.hair << endl;
        }
    if (data.sex != "")
        {
        os << "This character's gender is: " << data.sex << endl;
        }
    if (data.appearances != "")
        {
        os << "This character has made: " << data.appearances << " appearances " << endl;
        }
    if (data.emptyYear == false)
        {
        os << "This character was first introduced in : " << data.year << endl;
        }

    return os;
}
