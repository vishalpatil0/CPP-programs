//when we want to use private data member of class1 in class2 then we can use them by declaring class2 as friend of class1
#include<iostream>
using namespace std;
class xyz
{
	private:
		int a=45;
		string b="hello";
	public:
		friend class abc;
};
class abc
{
	public:
		void display(xyz obj)
		{
			cout<<obj.a<<endl;
			cout<<obj.b<<endl;
		}
};
int main()
{
	abc obj1;
	xyz obj2;
	obj1.display(obj2);
	return 0;
}
