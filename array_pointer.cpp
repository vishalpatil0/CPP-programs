#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5};
	
	cout<<*arr<<endl;  //*a=a[0]
	
	cout<<*arr+1<<endl;	//*arr+1=arr[0+1]=arr[1]
	
	for(int i=0;i<5;i++)
	{
		cout<<*arr+i<<endl;
	} 
	return 0;
}
