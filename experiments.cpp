#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int *ptr;
	ptr=&a;
	cout<<"Previous address -- > "<<ptr<<endl;
	ptr++;
	cout<<"address -- > "<<ptr<<endl;
	return 0;
}