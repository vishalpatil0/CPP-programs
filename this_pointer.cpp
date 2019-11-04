#include<iostream>
using namespace std;
int x;
class cal
{
	int x;
	public:
		void get(int x)
		{
			this->x=x;
		}
		void print()
		{
			cout<<x<<endl;
		}
};
int main()
{
	x=10;
	cal c;
	c.get(x);
	c.print();
	return 0;
}
			
