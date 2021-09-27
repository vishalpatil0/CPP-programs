#include<iostream>
using namespace std;
class complex{
    public:
    int a,b;
        void get(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void print(complex obj)
        {
            cout<<"complex number is =  "<<obj.a<<" + "<<obj.b<<'i'<<endl;    
        }        
};

complex sum(complex c4,complex c5)
{
    complex obj;
    obj.a=c4.a+c5.a;
    obj.b=c4.b+c5.b;
    return obj;
}
int main()
{
    complex c1,c2,sum1;
    c1.get(10,20);
    c1.print(c1);  
    c2.get(2,45);
    c2.print(c2);
    sum1=sum(c1,c2);
    sum1.print(sum1);
    return 0;
}