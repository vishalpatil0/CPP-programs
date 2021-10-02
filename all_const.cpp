/*
In C++ if you have defined the parametric constructor then you must to define default constructor.
*/
#include<iostream>
using namespace std;
class abc
{
	private:
		int a,b;
	public:
		abc()
		{
			cout<<"Default Constructor"<<endl;
			a=0;
			b=0;
			cout<<"a = "<<a<<"\tb = "<<b<<endl;
		}
		abc(int n1,int n2)
		{
			cout<<"Parameterized Constructor"<<endl;
			a=n1;
			b=n2;
			cout<<"a = "<<a<<"\tb = "<<b<<endl;
		}
		abc(abc& obj)
		{
			cout<<"Copy Constructor"<<endl;
			a=obj.a;
			b=obj.b;
			cout<<"a = "<<a<<"\tb = "<<b<<endl;
		}
		~abc()
		{
			cout<<"Destructor Called"<<endl;
		}
};
int main()
{
	abc a;
	abc a1(10,14);
	abc a2(a);
	abc a3(a1);
	return 0;
}
