#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char str[]="hello my name is vishal patil";
	
	cout<<str<<endl;
	cout<<"String length is = "<<strlen(str)<<endl;
	//scanning 
	cout<<"Enter the string here"<<endl;
	cin.ignore();
	cin.getline(str,100);
	cout<<str<<endl;
	
	return 0;
}
