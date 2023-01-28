#include <iostream> 
using namespace std;
template<class T=int> 
T GetMax (T a,T b)
{  
	return (a>b?a:b); 
}
template<typename T>
void vishal(T a){
    cout<<a<<endl;
}
int main () 
{
    int  i=5, j=6, k; 
    float  p=10.5, q=5.5, r;
    k=GetMax(i,j); 
    r=GetMax(p,q); 
    cout<<k<<"\n";
    cout<<r<<endl; 
    vishal("vishal");
    return 0; 
}

