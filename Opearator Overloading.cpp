#include<iostream>
using namespace std;
class Increment{
    int x;
    public:
        Increment(int i):x(i){
            cout<<"Value of x is = "<<x<<endl;
        }
        void display()
        {
            cout<<"After increment by 2 = "<<x<<endl;
        }
        void operator ++()
        {
            x=x+2;
        }
};
class addition{
    int num;
    public:
        addition(){}
        addition(int i):num(i){
            cout<<"Value of num is "<<num<<endl;
        }
        int operator +(addition A)
        {
            int res=num+A.num;
            cout<<A.num<<"yeee"<<endl;
            return res;
        }
        addition operator -(addition A)
        {
            addition b;
            b.num=num+A.num;
            return b;
        }
        void display()
        {
            cout<<"Value of num is "<<num<<endl;
        }
};
int main()
{
    Increment in(12);
    ++in;
    in.display();

    cout<<"Addition Operator"<<endl<<endl<<endl; 
    addition a1(10);   
    addition a2(20);
    cout<<"Addition of one memeber of 2 class is "<<a1+a2<<endl;
    addition a3=a1-a2;
    a3.display();
    return 0;
}