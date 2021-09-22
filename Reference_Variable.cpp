//Reference variable points to the same memory location.
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &b=a;
    cout<<b<<endl;
    b=290;
    cout<<a<<endl;
    return 0;
}