#include<iostream>
#include<memory.h>
using namespace std;
int main(){
    shared_ptr<int> ptr1 = make_shared<int>(10);
    shared_ptr<int> ptr2 = ptr1; 
    //Here one memory resource have multiple owners.
    return 0;
}