#include<iostream>
#include<stack>
using namespace std;
stack<int>getBinary()
{
	stack<int> st;
	int n,bit,i;
	cout<<"Enter number of bit"<<endl;
	cin>>n;
	cout<<"Enter binary number:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>bit;
		st.push(bit);
	}
	return st;
}
stack<int>addBinary(stack<int> &s1,stack<int> &s2)
{
	stack<int> s3;
	int sum,carry,st1,st2;
	sum=carry=st1=st2=0;
	while(!s1.empty()||!s2.empty())
	{
		if(!s1.empty())
		{
			st1=s1.top();
			s1.pop();
		}
		if(!s2.empty())
		{
			st2=s2.top();
			s2.pop();
		}
		sum=(st1+st2+carry)%2;
		carry=(st1+st2+carry)/2;
		s3.push(sum);
	}
	if(carry==1)
	{
		s2.push(1);
	}
	return s3;	
}
void showBinary(stack<int> s3)
{
	while(!s3.empty())
	{
		cout<<s3.top()<<"";
		s3.pop();
	}
	cout<<endl;
}
int main()
{
	stack<int> sk1,sk2,sk3;
	int choice;
	while(true)
	{
		cout<<"\n\n1-i/p first binary number\n2-i/p second binary no\n3-add binary number\n4-Exit\nEnter your choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				sk1=getBinary();
				break;
			case 2:
				sk2=getBinary();
				break;
			case 3:
				sk3=addBinary(sk1,sk2);
				showBinary(sk3);
				break;
			case 4:
				exit(1);
				break;
			default:
					cout<<"Invalid choice"<<endl;
		}
	}
	return 0;
}
