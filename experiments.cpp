#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a=1;
	int &b=a;
	int &c=b;
	int &d=a;
	cout<<d<<endl;
	return 0;
}