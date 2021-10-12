/*
constructor(arugment list):variable(arguement),variable(argument){}

but they as to be in order as they are declared.
*/

#include<iostream>
using namespace std;
class demo{
    int a;
    int b;
    public:
        demo(int i,int j):a(i),b(a+j)
        {
            cout<<"Value of a is "<<a<<endl
                <<"Value of b is "<<b<<endl;
        }
};
int main()
{
    demo d(10,20);  
    return 0;
}