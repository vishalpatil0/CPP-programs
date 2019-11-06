#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int>v;
	cout<<"Enter the total number of elements"<<endl;
	int n;
	cin>>n;
	int data;
	cout<<"Enter the element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>data;
		v.push_back(data);
	}
	cout<<"First Element: = "<<v.front()<<endl;
	cout<<"Last Element: = "<<v.back()<<endl;
	for(vector<int>::iterator it=v.begin();it!=v.end();++it)
	{
			cout<<*it<<endl;
	}
	return 0;
}
