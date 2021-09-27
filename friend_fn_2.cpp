#include<iostream>
using namespace std;
/*
Friend function can access the private member of a class.
by just delcaraing a function using "Friend" keyword in class it become friend function.


Friend function can access the private member of a class.

can't use friend keyword outside of the class.

can't use non static member of a classs in friend function without its object even if they are public.

Even if friend function define in the class it is not a member of class means you  can't acces it with class object or class name with help of scope resolution operator.
*/
class vol;
class cube
{
	public:
		int x;
		void set()
		{
			x=10;
		}
		friend void max(cube,vol);
};
class vol
{
	public:
		int y;
		void set()
		{
			y=20;
		}
		friend void max(cube,vol);
};
void max(cube c, vol v)
{
	if(c.x>v.y)
	{
		cout<<"c.x";
	}
	else
	{
		cout<<"c.y";
	}
}		
int main()
{
	cube c;
	vol v;
	c.set();
	v.set();
	max(c,v);
	return 0;
}
	
	
