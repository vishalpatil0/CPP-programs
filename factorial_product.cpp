//getting product of two numbers using factorial method 
#include<iostream>
using namespace std;
int product(int a,int b);
int res=0;
int main()
{
	int a,b;
	cout<<"Enter the value of a and b"<<endl;
	cin>>a>>b;
	cout<<"Result is "<<product(a,b)<<endl;
	return 0;
}
int product(int a,int b)
{
	if(b==0||a==0)
	{
		return 0;
	}
	else if(1<=b)
	{
		res=res+a;
		b--;
	}
	product(a,b);
	return res;
}
	
