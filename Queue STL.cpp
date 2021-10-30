#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;
    cout<<"Empty or Not --> "<<q.empty()<<endl;
    q.push("Vishal");
    q.push("Namrata");
    cout<<"Front --> "<<q.front()<<endl;
    q.pop();
    cout<<"Front --> "<<q.front()<<endl;
    cout<<"Size --> "<<q.size()<<endl;
    queue<string> m(q);
    m.push("Ganesh");
    q.swap(m);
    return 0;
}