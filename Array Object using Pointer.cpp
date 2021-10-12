#include<iostream>
using namespace std;
class demo{
    public:
        demo()
        {
            cout<<"Constructor is called"<<endl;
        }
        void display(string s)
        {
            cout<<"hello how are you "<<s<<" ?"<<endl;
        }
};

int main()
{
    // demo d1; //one way of creating object
    // new demo();    this way will create object but we can't use it 

//   creating pointer of object of class and using it for calling functions.

    // demo *ptr;
    // ptr=new demo; 
    // (*ptr).display(); 

    demo *ptr=new demo();    
    ptr->display("vishal"); //Arrow operator is use of dereferencing.

    //Array of Objects
    demo d2[2]; //array of two objects. so here constructor will called 2 times
    // for (int i = 0; i < 2; i++)
    // {
    //     d2[i].display("shruti");
    // }
    
    demo *dtr=&d2[2];
    for (int i = 0; i < 2; i++)
    {
        dtr->display("Kavita");
        dtr++;
    }
    
    return 0;
}