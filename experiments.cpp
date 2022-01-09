#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>vect(4);
	for(int x:vect)
	{
		cout<<x<<endl;
	}
	return 0;
}