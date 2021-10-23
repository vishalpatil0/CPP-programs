/*
Use BST
cannot modify the element.
unique element
return element in sorted order.

unordered set are fast and in unsorted way.

*/

#include<iostream>
#include<set>
using namespace std;
template<class T>
void display(set<T> &temp)
{
    auto itr=temp.begin();
    for (; itr!=temp.end(); itr++)
    {
        cout<<*itr<<endl;
    }
}
template<class T>
void displayForEachLoop(set<T> &temp)
{
    for(T x:temp)
    {
        cout<<x<<endl;
    }
}
int main()
{
    set<int> st;
    st.insert(2);
    st.insert(5);
    st.insert(5);
    st.insert(6);
    st.insert(6);
    st.insert(6);
    st.insert(3);
    st.insert(2);
    // display(st);
    displayForEachLoop(st);

    cout<<"Size --> "<<st.size()<<endl;
    cout<<"Maximum Size --> "<<st.max_size()<<endl;
    cout<<"Empty or Not--> "<<st.empty()<<endl;
    // st.clear(); //clear the set with size 0
    set<int> pk(st);
    pk.swap(st); 
    for (int i = 0; i < 10; i++)
    {
        pk.insert(i);
    }
    st.insert(st.begin(),9999);
    st.insert(pk.find(3),pk.end()); //find returns the iterator
    st.erase(st.begin(),st.end()); // takes iterator as input
    display(st);
    st.insert(2);
    cout<<"Present of not count --> "<<st.count(2)<<endl;
    return 0;
    
}