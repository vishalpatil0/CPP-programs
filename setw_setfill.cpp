//#include<iomanip> header file is used for setfill('') and setw(20)
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setw(40)<<"this is after 40 spaces"<<endl;
	cout<<setfill('+')<<setw(40)<<""<<endl;
	return 0;
} 
