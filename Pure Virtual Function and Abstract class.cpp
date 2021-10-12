/*
class having pure virtual function is abstract class
cannot create object of abstract class.
*/
#include<iostream>
using namespace std;
class demo{
    public:
    virtual void display()=0; //pure virtual function 
    //need to be derived in the derived class
};
class data:public demo{
    public:
    void display()
    {
        cout<<"hello"<<endl;
    }
};
int main()
{
    data d;
    // d.display();
    demo *dmr;
    dmr=&d;
    dmr->display();
    return 0;
}