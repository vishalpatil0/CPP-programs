#include<iostream>
using namespace std;
class abc
{
	private:
		int a=10;
	public:
		friend void display(abc);
};
void display(abc obj1)
{
	cout<<obj1.a<<endl;
}
int main()
{
	abc a;
	display(a);
	return 0;
}
