#include<iostream>
using namespace std;
template<class T1,typename T2>
class abc
{
	public:
		abc(T1 val1,T2 val2)
		{
			cout<<val1<<val2<<endl;
		}
};
int main()
{
	abc<int,char>a(23,'u');
	return 0;
}
