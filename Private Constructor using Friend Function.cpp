#include<iostream>
using namespace std;
class demo{
    demo();
    friend demo * k();
};
demo::demo()
{
    cout<<"ehh"<<endl;
}
demo * k()
{
    return new demo();
}
int main()
{   
    demo *dmo = k();
    return 0;
}