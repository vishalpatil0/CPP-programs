/*
In C++, string is an object of std::string class that represents sequence of characters. We can perform many operations on strings such as concatenation, comparison, conversion etc.


C++ provides following two types of string representations −

	-The C-style character string.
	-The string class type introduced with Standard C++.

*/

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char str[]="hello my name is vishal patil";

	cout<<str<<endl;

	char temp[100]="Hello shis is b ttszing";
	
	//string read write functions.
	fgets(temp,sizeof(temp),stdin);
	// cin>>temp; can also read the string.
    puts(temp);
    cout<<"Size of temp string is = "<<strlen(temp)<<endl;

	// puts(str); puts is used to put string

	// cout<<strcat(temp,str)<<endl;  this function returns the concated string.
	
	cout<<"String length is = "<<strlen(str)<<endl;
	
	//scanning 
	cout<<"Enter the string here"<<endl;
	
	cin.ignore(); //cin function returns the new line opeartor on console so to ignore the new line it is used.
	//getchar() can be use as alternative to cin.ignore() method.

	cin.getline(str,100); //read whole line until it finds out the new line operator.
	
	cout<<str<<endl;
	


	//Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.
	cout<<strcmp(temp,str)<<endl; //only compare first character of both string


	//Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.
	char* a=strchr(temp,'h');


	//Returns a pointer to the first occurrence of string s2 in string s1.
	char* a=strstr(str,temp);

	
	// charcter functions.
	char a=getchar();
    putchar(a);
	return 0;
}
