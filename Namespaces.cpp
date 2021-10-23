/*
someimes there are more than one variable  with same name
or function of same name from different library
so to avoid confusion we use name space
*/
#include<iostream>
using namespace std;
namespace first_space
{
    void fun() { cout<<"First Space"<<endl;}
}
namespace second_space
{
    void fun() { cout<<"Second Space"<<endl;}
}
using namespace second_space;
int main()
{
    first_space::fun();
    fun();
    return 0;
}