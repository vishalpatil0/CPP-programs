#include<iostream>
using namespace std;
class mammal{
    public:
        void show()
        {
            cout<<"how are you"<<endl;
        }
};
class bird{
    public:
        void show()
        {
            cout<<"kaise ho"<<endl;
        }
};
class bat: public mammal, public bird{
    public:
        void show()
        {
            mammal::show();
        }
};
int main()
{
    bat b;
    b.show();
    return 0;
}