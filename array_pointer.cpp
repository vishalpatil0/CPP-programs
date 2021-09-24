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

	short arr[]={1,2,3,4};
    
    short * ptr;
    ptr=arr;
    cout<<*ptr++<<endl;
    cout<<*ptr<<endl;
    cout<<*++ptr<<endl;
    cout<<*ptr<<endl;

	//In Array Pointer we can't increment the original array with increament and decrement operator bcoz this are constant pointer

	// so to use this opeartors we have to create a pointer which points to the base address of array.
	return 0;
}
