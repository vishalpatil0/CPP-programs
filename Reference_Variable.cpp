//Reference variable points to the same memory location.
#include<iostream>
using namespace std;

//swapping using pointers
void swapPointer(int * x, int * y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

//swapping using reference
void swapReference(int & m, int & n) //also return the reference variable like int & function name() { return variable; }
{
    int temp=m;
    m=n;
    n=temp;
}
int main()
{
    int a=10;
    int &b=a;
    cout<<b<<endl;
    b=290;
    cout<<a<<endl;

    int x=10,y=20;
    cout<<"Value of x and y before swapping is\nx = "<<x<<"\ny = "<<y<<endl;
    swapPointer(&x,&y);
    cout<<"Value of x and y after swapping using pointer is\nx = "<<x<<"\ny = "<<y<<endl;
    swapReference(x,y); //swapReference(x,y)=234;  if we get a reference varible in return then we can assign value here.
    cout<<"Value of x and y after swapping using reference is\nx = "<<x<<"\ny = "<<y<<endl;
    return 0;
}