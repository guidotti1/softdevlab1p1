#ifndef EXTRAFUNCTIONS_H
#define EXTRAFUNCTIONS_H

#include <iostream>
#include <vector>
using namespace std;

//removeSpecialCharacters basically helps to deal with the parentheses in the input
string removeSpecialCharacters(string & s);
//separate words just separates a multi word string into individual words in a vector of strings
void separateWords(string s, vector<string> & fullName);
//converts a string to all upper case. Each key value in nameMap is an uppercase string. Whenever a user enters in a name to search then it is turned into upper case so
//that it can be found in the nameMap
void toUpperCase(string & s);
//this function is used to remove a substring(findString) and replace it with replaceString
void findReplaceString(string & s, string  findString, string replaceString);

//#include "extraFunctions.cpp"
#endif // EXTRAFUNCTIONS_H
