// pointer is a variable that stores the address of another vairable.

#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *b;
    b=&a;
    cout<<"Value of a = "<<a<<endl;
    cout<<"Address of &a = "<<&a<<endl;
    cout<<"Value of a through pointer b = "<<*b<<endl;
    cout<<"Address of a through pointer b = "<<b<<endl;
    cout<<"Address of pointer &b = "<<&b<<endl;
    cout<<"*(&a) = "<<*(&a)<<endl;

    //Pointer to Pointer 
    // A pointer which stores the address of another pointer.

    int ** c;
    c=&b;
    cout<<"Value of c is = "<<c<<endl;
    cout<<"Address of b is = "<<&b<<endl;
    cout<<"Address of c is = "<<&c<<endl;
    cout<<"**c = "<<**c<<endl;
    cout<<"*(*(c)) = "<<*(*(c))<<endl;
    cout<<"*(*(*(&c))) = "<<*(*(*(&c)))<<endl;

    int *** d;
    d=&c;
    cout<<"***d = "<<***d<<endl;
    
    return 0;
}