/*
Note:
IMP:
When you create the object of derived class then the constructor of base class also get invoked so 


If base class constructor doesn't take any argument then don't need to pass the argumets.
If it takes then you need to pass the argumets.

In multiple inhertance the constructor of base class are called as per the declarations.

Constructor Virtual base class get invoked before non virtual based class.
Destructor of virtual base class get invoked last.

*/
#include<iostream>
using namespace std;
class demo{
    public:
        demo(string name)
        {
            cout<<"Constructor of virttual class is called name = "<<name<<endl;
        }
        ~demo()
        {
            cout<<"Destructor of Virtual class is called"<<endl;
        }
};
class base
{
    public:
        base(int a)
        {
            cout<<"Value of base class a is ="<<a<<endl;
        }
        ~base()
        {
            cout<<"Destructor of base class is called."<<endl;
        }
};
class child:public base,virtual public demo
{
    public:
        child(int a,string FName):demo(FName),base(a){
            cout<<"Default constructor of derived class is called."<<endl;
        }
        ~child()
        {
            cout<<"Destructor of derived class is called"<<endl;
        }
};
int main()
{
    child c(12,"Namrata");
    return 0;
}