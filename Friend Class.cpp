#include <iostream>
using namespace std;
class nam;
class vish
{
    int a;
    friend class nam;

public:
    void k(nam n)
    {
        cout << n.b << endl;
    }
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

int main()
{
    nam n;
    vish v;
    n.dis(v);
    v.k(n);
    return 0;
}