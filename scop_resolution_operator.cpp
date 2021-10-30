#include<iostream>
using namespace std;
int m=20;
int main()
{
	int m=30;  //redeclared 
	{
		int k=m;
		int m=10;
		cout<<"We are in the inner block"<<endl;
		cout<<"m\t"<<m<<endl;
		cout<<"k\t"<<k<<endl;
		cout<<"::m\t"<<::m<<endl; //:: calls the global scope.
	}
	cout<<"\n we are in the outer block\n";
	cout<<"m\t"<<m<<endl;
	cout<<"::m\t"<<::m<<endl;
	return 0;
}
