#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int arr[2]={1,2};
	vector<int>v(arr,arr+2);
	vector<int>::iterator iter=v.begin();
	cout<<*iter<<endl;
	iter=v.end()-1;
	cout<<*iter<<endl;
	return 0;
}
