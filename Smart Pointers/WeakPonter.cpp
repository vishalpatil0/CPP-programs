#include<iostream>
#include<memory>
using namespace std;
int main(){
    weak_ptr<int> ptr;
    {
        shared_ptr<int>shPtr=make_shared<int>(10);
        weak_ptr = shPtr;
    }
    //now weak again become null becuse it was never really a strong owner of the shared pointer memory
    return 0;
}