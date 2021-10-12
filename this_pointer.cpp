#include <iostream>
using namespace std;
int x;
class cal
{
	int x;

public:
	cal &get(int x)
	{
		(*this).x = x;
		// this->x=x;
		return *this; //returns the object 
	}
	void print()
	{
		cout << x << endl;
	}
};
int main()
{
	x = 10;
	cal c;
	c.get(x).print(); //returning the pointer to object of class.
	// cal c1=c.get(x);
	// c1.print();
	return 0;
}
