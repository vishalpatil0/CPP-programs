#include<iostream>
using namespace std;
template<class T>
void display(T x)
{
    cout<<"template display : "<<x<<"\n";
}
void display(int x)    // overloads the generic display
{
    cout<<"Explicit Display : "<<x<<endl;
}
int main()
{        
	display(100);//display(100) invokes the ordinary function not the template function.
        display(12.34);
        display('c');
        return 0;
}

