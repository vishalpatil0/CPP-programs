//factorial concept 5=5*4*3*2*1;
#include<iostream>
using namespace std;
int main()
{
	int i,n,r=1;
	cout<<"Enter the number for factorial"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		r=r*i;
	}
	cout<<"factorial is "<<r<<endl;
	return 0;
}

