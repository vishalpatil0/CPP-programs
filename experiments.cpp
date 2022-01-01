#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	// bool flag;
	int arr[]={23,56,1,3,87,12};
	for(int i=1;i<=6-1;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>-1 && key<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	for(int x:arr) cout<<x<<endl;
	return 0;
}