#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}	
int main()
{
	int a,b;
	cout<<"Enter the value for this two variables"<<endl;
	cin>>a>>b;
	cout<<"value before swapping"<<endl;
	cout<<"a"<<a<<"b"<<b<<endl;
	swap(a,b);
	cout<<"value after swapping"<<endl;
	cout<<"a"<<a<<"b"<<b<<endl;
	return 0;
}
