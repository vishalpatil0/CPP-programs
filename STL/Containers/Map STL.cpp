/*
Associative == Elements in associative containers are referenced by their key and not by their absolute position in the container.


Map is an associative array.
Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.

return in sorted key 
*/

#include <iostream>
#include <map>
using namespace std;
void display(map<string, int> &temp)
{
    map<string, int>::iterator itr = temp.begin();
    for (; itr != temp.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
}
int main()
{
    map<string, int> marksMap, temp;
    map<string,int> alpha(marksMap);        //creating map with already initlized map
    marksMap["Vishal"] = 100;
    marksMap["Prathmesh"] = 98;
    marksMap["Sushil"] = 78;
    marksMap["Namrata"] = 45;
    if (!marksMap.empty())
        cout << "Not empty" << endl;
    cout << "Size = " << marksMap.size() << endl;
    cout << "Max Size = " << marksMap.max_size() << endl;

    cout << "Methods" << endl;
    cout << "Sushil = " << marksMap["Sushil"] << endl;
    cout << "Namrata = " << marksMap["Namrata"] << endl;
    // marksMap.clear(); clear all the elements.
    // temp.swap(marksMap); //swapping

    // returns the iterator where the key is found.
    map<string, int>::iterator ir;
    ir = marksMap.find("Sushil");
    cout << ir->second << endl;
    marksMap["Namrata"] = 123;
    cout << marksMap.count("Namrata") << endl;

    // erasing elements
    // 1-by key
    marksMap.erase("Namrata");

    // 2 by iterator
    ir = marksMap.find("Sushil");
    marksMap.erase(ir);

    // 3- by range
    ir = marksMap.begin();
    marksMap.erase(ir, marksMap.end());

    // insert
    marksMap.insert(pair<string, int>("Namrata", 89));
    marksMap.insert({"Sushil", 77});
    marksMap.insert(pair<string, int>("Kunal", 85));

    // range insertion
    map<string, int> delta;
    delta.insert(marksMap.begin(), marksMap.end());
    display(delta);
    return 0;
}