#include "extraFunctions.h"

string removeSpecialCharacters(string & s)
{
    //basically used to remove parentheses and some other miscellaneous extra characters from the string that we read in
    for (int i = 0; i < s.size(); i++)
        {

        if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z' )) && !(s[i] == '-') && !(s[i] >= '0' && s[i] <= '9') && !(s[i] == '\''))
            {
            s[i] = '\0';
            }
        }
    return s;
}

void separateWords(string s, vector<string> & fullName)
{
    vector<char> newWord;
    for (int j = 0; j<s.length(); j++)
        {
        //enters all non null characters into a character array
        if(s[j] != '\0')
            {
            newWord.push_back(s[j]);
            }
        else
            {
            //if null character is found immediately just skip
            if (newWord.size() == 0)
                {
                continue;
                }
            //otherwise we make a cstring and fill it with the character array, add the terminating value '\0', then add that to the full name vector.
            char cString[newWord.size()+1];
            for (int k = 0; k<newWord.size(); k++)
                {
                cString[k] = newWord[k];
                }
            cString[newWord.size()] = '\0';
            fullName.push_back(cString);
            newWord.clear();
            }
        }
}

void toUpperCase(string & s)
{
    //converts a string to upper case character by character
    for (int r = 0; r<s.length(); r++)
        {
        s[r] = toupper(s[r]);
        }
}

void findReplaceString(string & s, string findString, string replaceString)
{
    //this function finds a substring (findString) within an overall string and replaces it with replaceString
    size_t i = s.find(findString);
    while(i != string::npos)
        {
        s.replace(i, findString.size(), replaceString);
        i = s.find(findString, i + replaceString.size());
        }
}
