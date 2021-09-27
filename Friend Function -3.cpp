/*
Friend function can access the private member of a class.
by just delcaraing a function using "Friend" keyword in class it become friend function.

Friend function can access the private member of a class.

can't use friend keyword outside of the class.

can't use non static member of a classs in friend function without its object even if they are public.

Even if friend function define in the class it is not a member of class means you  can't acces it with class object or class name with help of scope resolution operator.  

Can be declared/defined in the private,protected and public section of class.
*/

#include<iostream>
using namespace std;
class bole;
class vole
{
        friend void sum(vole v)
        {
            v.x=10;
            cout<<x<<endl;
        }
    static int x;
    friend void add(vole,bole);
    public:
};
int vole::x;
class bole
{
    int y;
    friend void add(vole,bole);
    public:
        friend void sum(bole b)
        {
            b.y=200;
            cout<<b.y<<endl;
        }
};
void sum()
{
    cout<<"hello"<<endl;
}
void add(vole a,bole b)
{
    cout<<endl;
    cout<<a.x+b.y<<endl;
}
int main()
{
    vole v;
    bole b;
    sum(b);
    sum();
    sum(v);
    cout<<endl;
    add(v,b);
    return 0;
}