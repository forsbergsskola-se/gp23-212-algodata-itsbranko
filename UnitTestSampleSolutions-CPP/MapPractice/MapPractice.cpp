#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    //associating string with anothe string 
    map<string, string> myDictionary;
    myDictionary.insert(pair<string,string>("apple","jabuka"));
    myDictionary.insert(pair<string,string>("hair","kosa, dlaka"));
    myDictionary.insert(pair<string,string>("banana","banana"));
    myDictionary.insert(pair<string,string>("plant","biljka, saditi"));

    for (auto pair : myDictionary)
    {
        //map will always organize the list in the alphabetic order
        cout << pair.first << " - " << pair.second << endl;
    }
}
