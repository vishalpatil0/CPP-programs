//simple template class with single arguments
#include<iostream>
using namespace std;
template<class T>
class abc
{
	public:
		T a;  //user defined data type are here
		T b;  //user define data type are here
		abc(T val1,T val2) //parameterized constructor
		{
			a=val1;
			b=val2;
			cout<<"val1="<<val1<<"\t val2="<<val2<<endl;
		}
};
int main()
{
	abc<int>a(12,13); //passing value to parameterized constructor with int as data type
	abc<float>b(12.3,23.9); //float data type
	return 0;
}
