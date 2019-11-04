//The Fibonacci sequence is a set of numbers that starts with a one or a zero, followed by a one, and proceeds based on the rule that each number (called a Fibonacci number) is equal to the sum of the preceding two numbers.
#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter the number of term"<<endl;
	cin>>n;
	int first=0,second=1,next;
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			next=i;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		cout<<next<<endl;
	}
	return 0;
}
