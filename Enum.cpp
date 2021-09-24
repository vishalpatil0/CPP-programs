/*
enum assigne numbers to elements.
*/

#include<iostream>
using namespace std;
int main()
{
    enum color{orange, red, green};
    cout<<orange<<red<<green<<endl;

    cout<<"Type of enum element is = "<<typeid(red).name()<<endl;

    color c1=red;
    cout<<c1<<endl;

    cout<<(orange==0)<<endl;
    return 0;
}