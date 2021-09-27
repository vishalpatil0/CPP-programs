#include<iostream>
using namespace std;
int fib(int n)
{
    if (n<2 && n>=0)
    {
        return n;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{   
    int num1;
    cout<<"Enter a number = "<<endl;
    cin>>num1;
    cout<<"fibonacci number = "<<fib(num1)<<endl;
      
    return 0;
}
