#include <iostream> 
using namespace std;
template<class T> 
class Demo
{
	T a,b; 
	public:
 		Demo(T first, T second)
  		{
    			 a=first;  
    			 b=second;
   		}
   		T getmax();
}; 
template<class T>
T Demo<T>::getmax()
{ 
      T result;
      result=a>b?a:b; 
      return result; 
}
 int main() 
{
    Demo<int>d1(10,70); 
    cout<<d1.getmax();
     return 0;
 }

