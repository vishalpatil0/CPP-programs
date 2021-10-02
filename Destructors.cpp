//Destructor doesn't take and return any arugements.
#include<iostream>
using namespace std;
int count=0;
class Demo
{
    public:
        Demo()
        {
            cout<<"Default Constructor with count value = "<<++count<<endl;
        }    
        ~Demo()
        {
            cout<<"Destructor is called with count value is = "<<count--<<endl;
        }
};
int main()
{
    cout<<"Main Function"<<endl;
    Demo d1;
    {
        cout<<"Entering the inside block"<<endl;
        cout<<"Creting two more object"<<endl;
        Demo d2,d3;
        cout<<"Exiting the block"<<endl;
    }
    return 0;
}