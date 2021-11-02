/*
Priority queues are a type of container adapters, specifically designed such that the first element of the queue is the greatest of all elements in the queue 
*/
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;  //maximum element get popped first
    
    pq.push(23);
    pq.push(13);
    pq.push(89);
    pq.push(4444);
    pq.push(3);
    priority_queue<int> m(pq);
    while(!m.empty())
    {
        cout<<m.top()<<endl;
        m.pop();
    }
    cout<<m.size()<<endl;

    //min heap
    priority_queue<int,vector<int>,greater<int>> mini;
    mini.push(23);
    mini.push(13);
    mini.push(89);
    mini.push(4444);
    mini.push(3);
    cout<<"Emtpy or not --> "<<mini.empty()<<endl;
    int k=mini.size();
    for (int i = 0; i < k; i++)
    {
        cout<<mini.top()<<endl;
        mini.pop();
    }
    return 0;
}