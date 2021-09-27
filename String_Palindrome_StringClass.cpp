#include<iostream>
using namespace std;
string palin(string temp)
{
    string str;
    for (string::reverse_iterator itr = temp.rbegin(); itr != temp.rend(); itr++)
    {
        str.push_back(*itr);
    }
    return str;
}
int main()
{   
    cout<<"Enter a string here = ";
    string s1;
    getline(cin,s1);
    cout<<"Entered string is = "<<s1<<endl;
    if(s1==palin(s1))
        cout<<"It is palindrome"<<endl;
    else
        cout<<"It is not palindrome"<<endl;
    return 0;
}
