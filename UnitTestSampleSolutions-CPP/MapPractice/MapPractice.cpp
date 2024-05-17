#include <iostream>
#include <string>
#include <map>      //unordered_map is another map but its not ordered .. duhh

using namespace std;

int main()
{
    //associating string with anothe string 
    map<string, string> myDictionary;
    myDictionary.insert(pair<string,string>("apple","jabuka"));
    myDictionary.insert(pair<string,string>("hair","kosa, dlaka"));
    myDictionary.insert(pair<string,string>("banana","banana"));
    myDictionary.insert(pair<string,string>("plant","biljka, saditi"));

    myDictionary["plant"] = "Biljka, Saditi";

    myDictionary.clear();

    cout << "Size of Dictionary is: " << myDictionary.size() << endl; 
    
    for (auto pair : myDictionary)
    {
        //map will always organize the list in the alphabetic order (ascending order) - a,b,c,d ... 1,2,3,4
        cout << pair.first << " - " << pair.second << endl;
    }
}
