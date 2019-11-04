#include<iostream>
using namespace std;
int main()
{
	int i,flag=0,n;
	cout<<"Enter the number to check "<<endl;
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(n==1)
	{
		cout<<"1 is not prime number"<<endl;
	}
	else
	{
		if(flag==0)
		{
			cout<<"it is prime number"<<endl;
		}
		else
		{
			cout<<"it is not prime number"<<endl;
		}
	}
	return 0;
}
