#include<iostream>
#include<memory.h>
using namespace std;
int main(){
    unique_ptr<int> uniquePtr = make_unique<int>(10);
    cout<<uniquePtr<<endl;
    cout<<*uniquePtr<<endl;
    //This pointer are unique means they cannot be shared.
    unique_ptr<int> ptr = uniquePtr; //it is not possible
    return 0;
}