/*
A virtual function is a member function which is declared within a base class and is re-defined(Overriden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function. 

Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
They are mainly used to achieve Runtime polymorphism
Functions are declared with a virtual keyword in base class.
The resolving of function call is done at Run-time.
*/#include<iostream>
using namespace std;
class base{
    public:
    int a=1;
    virtual void display()
    {
        cout<<"Displaying the value of base class = "<<a<<endl;
    }
};
class derived:public base{
    public:
    int b=2;
    void display()
    {
        cout<<"Displaying the value of base class = "<<a<<endl;
        cout<<"Displaying the value of derived class = "<<b<<endl;
    }
    void derivedClassMethod(){
        cout<<"Derived class method"<<endl;
    }
};
int main()
{
    base *bptr = new derived();
    bptr->display();
    return 0;
}