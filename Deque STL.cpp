#include<iostream>
#include<deque>
using namespace std;
template<class T>
void display(deque<T> &temp)
{
    auto itr=temp.begin();
    for (; itr!=temp.end(); itr++)
    {
        cout<<*itr<<endl;
    }
}
int main()
{
    deque<int> d;
    deque<int> d1(d);       //another way of intilizing deque
    d.push_back(2);
    d.push_front(34);
    display(d);
    cout<<"Front -> "<<d.front()<<endl;
    cout<<"Back -> "<<d.back()<<endl;
    cout<<"Empty or Not --> "<<d.empty()<<endl;
    cout<<"d.at(3) --> "<<d.at(1)<<endl;
    cout<<"d[0] -->"<<d[0]<<endl;
    cout<<"Size -->"<<d.size()<<endl; //number of elements.
    cout<<"Max Size -->"<<d.max_size()<<endl;
    d.pop_back();
    d.pop_front();
    d.clear(); //clears the deque with size 0
    d.resize(10);//10 elements with 0 value.
    

    //another deque 
    deque<int> dq={1,2,3,4,5,6};
    // deque<int> dq{1,2,3,4,5,6};
    cout<<"Before erase = "<<dq.size()<<endl;
    dq.erase(dq.begin()+2,dq.end()-2); //takes iterator as position for range
    cout<<"After erase = "<<dq.size()<<endl;
    // cout<<*dq.begin()<<endl;

    d.assign(10,900); //10 elements of 900 value
    d.assign(dq.begin(),dq.end()-1); //one deque to anohter deque
    //assign changes the size 

    //insert
    d.insert(d.begin()+1,120);
    // d.insert(d.begin()+1,3,120); //insert 3 3 element of 120 value
    d.insert(d.end()-1,dq.begin(),dq.end());
    d.shrink_to_fit();
    d.swap(dq);
    display(d);
    return 0;
}