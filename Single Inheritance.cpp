/*
1- You can't inherit private members of base class.

            private derivation --- public derivation -- protected derivation
private        not inherited         not inherited         not inherited
protected       private              protected             protected
public          private              public                protected

*/
#include<iostream>
using namespace std;
class CellPhone{
    public:
        string Model_Name;
        CellPhone(){}
        CellPhone(string Model_Name)
        {
            this->Model_Name=Model_Name;
        }
        void torch()
        {
            cout<<"Torch is on"<<endl;
        }
        void showMoelName()
        {
            cout<<"Model name is = "<<Model_Name<<endl;
        }
};
//syntax to use base class
//class derived-classname : {visibility mode} {base classname}
/* 
1 - Default visibility mode is private.
2 - Private Visibility mode : public members of base class become private members of derived class.
3 - Public Visibility mode : Public members of base class become private members of derived class.
*/
class SmartPhone: public CellPhone
{
    public:
    SmartPhone(){}
    SmartPhone(string Model_Name)
    {
        this->Model_Name=Model_Name;
    }
    void games()
    {
        cout<<"you can play game here"<<endl;
    }
};
int main()
{
    SmartPhone sp("Galaxy J5");
    sp.torch();
    sp.showMoelName();
    return 0;
}