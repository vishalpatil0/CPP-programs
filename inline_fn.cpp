//With inline keyword, the compiler replaces the function call statement with the function code.
#include<iostream>
using namespace std;
inline int add(int a,int b);
int main()
{
	int a,b;
	cout<<"Enter the value for a and b"<<endl;
	cin>>a>>b;
	cout<<"Addition is ="<<add(a,b);
	return 0;
}
inline int add(int a,int b)
{
	return(a+b);
}
