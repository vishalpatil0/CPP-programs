#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int arr[2];
	vector<int>v1(arr,arr+2);
	v1[0]=34;
	v1[1]=23;
	v1.push_back(87);
	int n=v1.size();
	for(int i=0;i<n;i++)
	{
		cout<<v1[i]<<endl;
	}
	v1.pop_back();
	n=v1.size();
	for(int i=0;i<n;i++)
	{
		cout<<v1[i]<<endl;
	}
	if(!v1.empty())
	{
		cout<<"Not emepty"<<endl;
	}
	return 0;
}
