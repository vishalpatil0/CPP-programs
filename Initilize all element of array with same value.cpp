#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr1[10]={}; // all elements are zeros.
    int arr2[10]={0}; // all elements are zeros.
    int arr3[]={};   // elements upto 26 are 0 rest are garabage value. size of this array is depend on system architecture.
    int arr4[100];
    //using for loop

    //using std:fill_in function
    int arr5[100];
    fill_n(arr5,100,45);
    cout<<arr5[5]<<endl;

    int arr6[10]={1,2};
    //this array have all remaining value as 0.
    return 0;
}