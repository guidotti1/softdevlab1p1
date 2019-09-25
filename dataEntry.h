#ifndef DATAENTRY_H
#define DATAENTRY_H

#include <iostream>
#include <vector>
using namespace std;

class dataEntry
{
public :
    //all of the characteristics of an individual character
    //name is a vector<string> so that we can separate each word of a characters name
    //for many characters we will include the information occurring between the ( ) additionally in the name vector<string>
    //Only the characters having the (Earth-616), (Counter-Earth), or (Asgard) will have this information removed.
    //I made this choice because these are very common universes to be found in the data. For many  characters the data contained between the ( ) may actually be an additional name
    //or it may be useful information about the character.
    string pageID;
    vector<string> name;
    string ID;
    string align;
    string eye;
    string hair;
    string sex;
    string gsm;
    string alive;
    string appearances;
    string firstAppearance;
    string year;
    //emtpyYear for the class. Used to make sure that an empty spot is not output if there is no data for year for the character
    bool emptyYear;
    //default constructor
    dataEntry();
    //this dataEntry constructor takes in a string vector containing the contents of a row separated by commas, because the input file type is .csv
    //based on the positions in the row vector we initialize each above characteristic of a character
    //the bool emptyYear is used in the event that the last column, year, is empty which will cause issues if not corrected.
    dataEntry(vector<string> row, bool emptyYearNonClass);
    //output stream operator is overloaded in order to output a character's characteristics neatly
    friend ostream& operator<<(ostream&os, const dataEntry & data);

private:

};

//#include "dataEntry.cpp"
#endif // DATAENTRY_H
