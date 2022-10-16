/*
Constructor is special type function with no return type.
Name is same as class.

can be declared only in class and define outside of the class with the help of scope resolution operator just like normal function.

Constructor initlized the data member of class.

Default constructor get called whenever object of class get created.

It is good to have constructor public but you can still use private constructor with the help of friend class or function.

In C++ if you have defined the parametric constructor then you must to define default constructor.

When there is no copy constructor found then compiler provides it own copy constructor.
*/

#include<iostream>
using namespace std;
class cube
{
		int b,i=1;
	public:
		cube()
		{
			cout<<"this is default counstructor"<<endl;
		}
		cube(int a)
		{
			b=a;
			cout<<"Parameterized constructor = "<<b<<endl;
		}
		cube(cube &c1)
		{
			b=c1.b;
			cout<<"copy constructor = "<<b<<endl;
		}
		~cube()
		{
			cout<<"Destructor called = "<<i<<endl;
		}
};
int main()
{
	cube c;
	cube c1=cube(12);
	cube c2(c1);
	return 0;
}
