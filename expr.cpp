#include<iostream>
using namespace std;
bool check(int num)
{
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)    return true;
    }
    return false;
}
void print(int teststart,int testend)
{
    int ts=0;
    for(int i=teststart;i<=testend;i++)
    {
        if(check(i))
        {
            if(ts==0)   ts=i;
        }
        else
        {
            if(ts!=0)
            {
                if((i-ts)>5)
                {
                    cout<<ts<<' '<<i-1<<' '<<i-ts<<endl;
                }
                ts=0;
            }
        }
    }
}
int main()
{
    int start,end;
    cout<<"Enter the start and end point = ";
    cin>>start>>end;
    print(start,end);
    return 0;
}