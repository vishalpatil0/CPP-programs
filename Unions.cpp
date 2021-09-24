/*
Just like structure but at the overall size allocated to it is the size of the largest data type in it.
*/
#include<iostream>
using namespace std;
union student
{
    char a;
    short b;
    long long c;
}e1;

int main()
{
    e1.a='Z';
    e1.b=10;
    cout<<e1.a<<e1.b<<endl;
    return 0;
}