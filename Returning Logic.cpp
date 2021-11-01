#include<iostream>
#include<stack>
using namespace std;
int demo()
{
    return 0;
}
int main()
{
    int temp;
    if(temp=demo())  // it will not work bcoz the value of temp is 0
    {
        cout<<temp<<endl;
    }
    return 0;
}