#include<iostream>
using namespace std;
int main()
{
    string s="vishal";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='i') s.erase(s.begin()+i);
    }
    cout<<s<<endl;
    return 0;
}