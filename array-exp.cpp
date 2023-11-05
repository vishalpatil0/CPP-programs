#include<iostream>
using namespace std;
int main()
{
	int arr[5]={0,77,2,3,4};
	cout<<"&arr[0] = "<<&arr[0]<<endl;
	cout<<"arr = "<<arr<<endl;
	cout<<"*arr = "<<*arr<<endl;
	cout<<"*arr+1= "<<*arr+1<<endl;
	cout<<"*(arr+1)= "<<*(arr+1)<<endl;
	cout<<"arr+1 = "<<arr+1<<endl;	
	cout<<"&arr[1] = "<<&arr[1]<<endl;
	cout<<"arr[2] = "<<arr[2]<<endl;
	cout<<"*(arr+2) = "<<*(arr+2)<<endl;



	cout<<endl<<"printing array using sizeof opearor"<<endl<<endl;
	int arr1[]={1,2,3,4};
    for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
    {
        cout<<i<<endl;
    }
	return 0;
}
