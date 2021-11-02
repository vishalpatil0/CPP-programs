#include<iostream>
#include<stack>
using namespace std;
// template <class T>
// void display(stack<T> &temp)
// {
//     for(string s: temp)
//     {
//         cout<<s<<endl;
//     }
// }
int main()
{
    stack<string> names;
    names.push("Vishal");
    cout<<"Empty or not --> "<<names.empty()<<endl;
    cout<<"Size  --> "<<names.size()<<endl;
    cout<<"Top --> "<<names.top()<<endl;
    names.push("Shreya");
    names.push("Vinod");
    names.push("Emma");
    cout<<"Top --> "<<names.top()<<endl;
    
    
    return 0;
}