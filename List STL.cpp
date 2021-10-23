#include<iostream>
#include<list>
#include<math.h>
using namespace std;
template<class T>
void iterativeDisplay(list<T> &temp)
{
    for (auto itr=temp.begin(); itr!=temp.end(); itr++)
    {
        cout<<*itr<<endl;
    }
    
}
// a binary predicate implemented as a class:
struct is_near {
  bool operator() (double first, double second)
  { return (labs(first-second)<20.0); }
};
int main()
{
    list<int> l1;
    list<int> l4(l1);       //creating list with already initlized list
    if(l1.empty())
    {
        cout<<"List is empty"<<endl;
        cout<<"Size = "<<l1.size()<<endl;
        cout<<"Maximum Size = "<<l1.max_size()<<endl;    
    }
    cout<<"Operations"<<endl;
    l1.push_back(99);
    l1.push_front(1);
    // iterativeDisplay(l1);
    l1.pop_back();
    l1.pop_front();
    iterativeDisplay(l1); //if there is no element in list then size is zero so it doesn't print then elements.

    l1.assign(2,300);  //2 integers with value 300
    // iterativeDisplay(l1);
    
    list<int>l2;
    for (int i = 0; i < 5; i++) l2.push_back(i*i);
    
    l1.assign(l2.begin(),l2.end());

    l2.clear(); //Removes all elements from the list container (which are destroyed), and leaving the container with a size of 0.

    l2.swap(l1);//swaping l1 in l2
    // l2.erase(++(l2.begin())); removes the elememnt

    // l2.insert(l2.begin(),2,10);// insrtion
    
    list<int>::iterator itr=l2.begin();
    for ( ; itr != l2.end(); itr++)
    {
        if(*itr==9) break;
    }
    l2.insert(itr,4,999);

    l2.reverse(); //reverse the order in the list
    l2.resize(10,6784); // 10 element of 6784 value
    // l2.resize(20); resize with the size of 20 and if element are not inserted then default value is 0.
    l2.remove(16); //remove element with specific value.
    l2.unique(is_near()); //keep onley unique element.
    l2.unique(is_near()); //this keep only thos element whose differenece is not in 20

    list<long> l3(5,5555);
    // l2.merge(l3);
    l2.clear();
    for (int i = 0; i < 20; i++)
    {
        l2.push_back(pow(i,3));
    }
    l2.reverse();
    l2.sort();
    iterativeDisplay(l2);
    

    //for each for list
    for(int x : l2)
        cout<<x<<endl;
    return 0;
}