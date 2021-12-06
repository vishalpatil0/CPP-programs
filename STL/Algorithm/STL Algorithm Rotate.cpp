#include <algorithm>  
#include <iostream>  
#include <string>  
  
using namespace std;  
  
int main() {  
  string str = "Hello";  
  cout << "Before Rotate : "<< str << endl;  
    
  rotate(str.begin(), str.begin() + 5, str.end());  
  cout <<"After Rotate  : " << str << endl;  
  
  int arr[]={10,20,30,40,50,60,70};
	rotate(arr,arr+7-2,arr+7); //right rotate
	for(int x: arr)
	{
		cout<<x<<endl;
	}
	rotate(arr,arr+2,arr+7); //left rotate
	for(int x: arr)
	{
		cout<<x<<endl;
	}
  return 0;  
}  