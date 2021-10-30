#include<iostream>
using namespace std;
int main()
{
	int i=19;
	float f=23.9;
	cout<<"int i="<<i<<endl;
	cout<<"float f="<<f<<endl;
	cout<<"int float(i)="<<float(i)<<endl;
	cout<<"float int(f)="<<int(f)<<endl;

	float a=4.5f;
    auto b=(int)a;
    cout<<b<<endl;
    cout<<typeid(b).name()<<endl; //integer
	return 0;
}
