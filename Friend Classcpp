#include <iostream>
using namespace std;
class nam;
class vish
{
    int a;
    friend class nam;

public:
    void k(nam);
};
class nam
{
    int b = 123;

public:
    void dis(vish v)
    {
        cout << v.a << endl;
    }
    friend class vish;
};

void vish::k(nam n)
{
    cout << n.b << endl;
}

int main()
{
    nam n;
    vish v;
    n.dis(v);
    v.k(n);
    return 0;
}