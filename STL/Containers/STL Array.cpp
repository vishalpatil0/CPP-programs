#include<iostream>
#include<array>
using namespace std;
void iterativeDisplay(array<int,5>&hel)
{
    auto i=hel.begin();
    for (; i !=hel.end(); i++)
    {
        cout<<*i<<endl;
    }
    
}
int main()
{
    // array<int,5> arr;
    array<int,5> arr={1,2,3,4};
    // array<int,10> a1(2,10);  we cannot do it in array STL

    array<int,5> pkr(arr); // creating array with already initlized array.
    //size
    cout<<"Size = "<<arr.size()<<endl; //size of array
    //max_size
    cout<<"Max Size = "<<arr.max_size()<<endl;  //size and max size is same
    //sizeof(arr) is also usable here
    //empty
    cout<<"Empty or not = "<<arr.empty()<<endl;
    //element access
    cout<<arr.front()<<endl;
    cout<<arr.at(1)<<endl;
    cout<<arr[2]<<endl;
    cout<<arr.back()<<endl;

    cout<<*(arr.data()+3); //data function returns the address of first element
    arr.fill(999);          //fill all indexes with similar given value.
    array<int,5> temp;
    temp.swap(arr);
    for(int x:temp) cout<<x<<endl;
    temp.fill(0);
    // iterativeDisplay(temp);

    
    return 0;
}