#include<iostream>
using namespace std;
void fun(double num1,char a='Z',float b=20)  //you should write default parameters after the compulsory parameters
{
	cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
}
int main()
{
	fun(12.23331,23); //you have to give arguments in order otherwise if you give only second data type arguement then it will try to type cast it into first and if it can't then it will return blankspace.
	// fun() if all parameters are defualt arguemtns then it will work otherwise you have to give the compulsory parameters
	return 0;
}
