// Manipulators are those who maipulates the flow of bytes.
// header file is iomanip
// 1. endl
// 2. setw
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<setw(4)<<12<<endl;
    cout<<setw(4)<<121<<endl;
    cout<<setw(4)<<1222<<endl;
    cout<<setw(4)<<122442<<endl;
    return 0;
}