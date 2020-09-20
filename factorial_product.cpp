//getting product of two numbers using factorial method 
#include<iostream> // header file declaration	
using namespace std; // to import standard definition of packages		
int product(int a,int b); // declaration of function
int res=0; // declaration of global variable
int main() // main function 	
{
	int a,b;  // declaration of two varibales for product
	cout<<"Enter the value of a and b"<<endl; //msg to enter the value 
	cin>>a>>b; // scan the value of 2 number
	cout<<"Result is "<<product(a,b)<<endl; // msg of result
	return 0;  // return 0 because of main is "int" here
}
int product(int a,int b)  // recursive function definition
{
	if(b==0||a==0)  // if both numbers are zero then enter in this "if" condition
	{
		return 0;  //and return 0 bcoz if any one of them is 0 then product will be definitely 0
	}
	else if(1<=b)  //otherwise if b is greater than or equal to 1 then enter in this condition 
	{
		res=res+a;  //add value of "a" to res 
		b--;  //decrement b by 1
	}
	product(a,b);  //recursilve function calling until it didn't get 0 in return
	return res;  //return the value of res variable
}
	
