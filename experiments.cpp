#include<iostream>
#define size 10
using namespace std;
void print(int arr[]);
void revPrint(int arr[]);
int main(){
	int arr[size];
	cout<<"Randomly allocating elements to arry........"<<endl;
	for (int i = 0; i < size; i++)
	{
		arr[i]=i+167-23;
	}
	cout<<"Printing array"<<endl;
	print(arr);
	cout<<"Reverse array printing"<<endl;
	revPrint(arr);
	return 0;
}
void print(int arr[]){
	for (int i = 0; i < size; i++)
	{
		cout<<i+1<<" = "<<arr[i]<<endl;
	}
}
void revPrint(int arr[]){
	int front = 0;
	int back = size-1;
	while(front<back){
		swap(arr[front++],arr[back--]);
	}
	for (int i = 0; i < size; i++)
	{
		cout<<i+1<<" = "<<arr[i]<<endl;
	}
}