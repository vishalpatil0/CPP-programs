#include<iostream>
using namespace std;
class demo
{
	int a,b,c;
	public:
		demo(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		void display()
		{
			cout<<a<<endl;
			cout<<b<<endl;
			cout<<c<<endl;
		}
		demo operator=(demo &d4)
		{
			a=d4.a;
			b=d4.b;
			c=d4.c;
		}
};
int main()
{
	demo d1(10,20,30);
	demo d2(40,50,60);
	cout<<"Display d1 object"<<endl;
	d1.display();
	cout<<"Display d2 object"<<endl;
	d2.display();
	d2=d1;
	cout<<"Display d2 object"<<endl;
	d2.display();
	return 0;
}
