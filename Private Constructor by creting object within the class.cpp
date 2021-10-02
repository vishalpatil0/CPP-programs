#include<iostream>
using namespace std;
class demo{
    demo();
    friend void k();
    public:
        demo(int a)
        {
            demo d;
            cout<<a<<endl;
        }
};
demo::demo()
{
    cout<<"ehh"<<endl;
}

int main()
{   
    demo d(19);
    return 0;
}