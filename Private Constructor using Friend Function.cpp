#include<iostream>
using namespace std;
class demo{
    demo();
    friend void k();
};
demo::demo()
{
    cout<<"ehh"<<endl;
}
void k()
{
    demo d;
}
int main()
{   
    k();
    return 0;
}