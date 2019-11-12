#include<iostream>
using namespace std;
class demo
{
	
		int a;
	public:	demo()
		{
			a=0;
		}
		demo(int x)
		{
			a=x;
		}
		friend demo operator<<(ostream &o,demo &d1)
		{
			o<<d1.a<<endl;
			return d1;
		}
		friend demo operator>>(istream &i,demo &d1)
		{
			cout<<"Enter value of a"<<endl;
			i>>d1.a;
		}
};
int main()
{
	demo d4;
	cin>>d4;
	cout<<d4;
	return 0;
}
		
