#include<iostream>
using namespace std;
class demo{
    public:
    demo();
};
demo::demo()
{
    cout<<"ehh"<<endl;
}
int main()
{   
    demo d=new demo();
    return 0;
}