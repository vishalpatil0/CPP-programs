/*
Friend function can access the private member of a class.

can't use friend keyword outside of the class.

can't use non static member of a classs in friend function without its object even if they are public.

Even if friend function define in the class it is not a member of class means you  can't acces it with class object or class name with help of scope resolution operator.

Can be declared/defined in the private,protected and public section of class.
*/

#include<iostream>
using namespace std;
class cube
{
	private:
		int a,b;
	public:
		void set()
		{	
			a=2;
			b=3;
		}
		friend int mean(cube);
		
		
		// friend int mean(cube c)
		// {
		// 	return float((c.a+c.b)/2.0);
		// }
		//can also direclty define friend function in class without defining outside.

};
int mean(cube c)
{
	return float((c.a+c.b)/2.0);
}
int main()
{
	cube x;
	x.set();
	cout<<"Mean is ="<<mean(x)<<endl;
	return 0;
}
