#include<iostream>
using namespace std;
class cal
{
	public:
		int a,b,c;
		cal(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		void operator-()
		{
			a=-a;
			b=-b;
			c=-c;
		}
		void operator+(){
			a += a;
			b += b;
			c += c;
		}
		void display()
		{
			cout<<a<<b<<c<<endl;
		}
};
int main()
{
	cal c4(10,-20,30);
	-c4;
	c4.display();
	+c4;
	c4.display();
	return 0;
}
