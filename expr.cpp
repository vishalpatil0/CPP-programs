#include<iostream>
using namespace std;
void show(){
    cout<<"showing......"<<endl;
}
void callFunction(void (*fptr)()){
    (*fptr)();
}
int main(){
    long g = 12l;
	cout<<g<<endl;
}