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
	cube c1(12);
	cube c2(c1);
	return 0;
}
