#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void setData(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    void putData(complex obj)
    {
        cout<<"a ="<<obj.a<<endl;
        cout<<"b ="<<obj.b<<endl;
    }
}c1,c2;
int main()
{
    c1.setData(10,20);
    c2.setData(32,43);
    c2.putData(c1); // here we are calling the method of c2 object by passing c1 object so it will print value of c1 object.
    return 0;
}