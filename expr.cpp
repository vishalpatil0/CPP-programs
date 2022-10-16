#include <iostream>
using namespace std;
class parent{
    private:
        int privateMember = 10;
    protected:
        int protectedMember = 20;
    public:
        int publicMember = 30;

    parent(int a){
        cout<<a<<endl;
    }
    ~parent(){
        cout<<"Base class destructor got called...."<<endl;
    }
};
class Demo : public parent{
    public:
        string className;
    public:
        /* Demo(){
            cout<<"Default constructor got called means no paramter empty parentheis or even no parenthesis"<<endl;
            className = "xxxxxxxxxxxx";
        } */
        Demo(string className,int a):parent(a){
            this->className = className;
        }
        // Demo(Demo *demo);
        void show(){
            cout<<"Class Name -> "<<className<<endl;
            printf("\n]nPrinting parent class properties in different scopes\n\n");
            // printf("private member %d \n",parent::privateMember);
            printf("protected member %d \n",parent::protectedMember);
            printf("public member %d \n",parent::publicMember);
        }
        static void display(){
            cout<<"Static method is being called"<<endl; 
        }
        ~Demo(){
            this->className = "xxxxxx";
            cout<<"child class Destructor got called"<<endl;
        }
};

void show(int a, int b = 20){
    cout<<a<<'\t'<<b<<endl;
}
class B;
class A{
    public:
    int g = 12;
    friend int add(A,B);
};

class B{
    int h = 13;
    friend int add(A,B);
};
int add(A a,B b){
    return a.g * b.h;
}

//Template

template<typename T,typename N>
void sho(T a,N s){
    cout<<a<<s<<endl;
}

//Template Class
template<typename T,class B>
class Power{
    public:
        Power(){
            cout<<"Default Constructor"<<endl;
        }
    private:
        static void disco(){
            cout<<"Dancing................."<<endl;
        }
};

void changingObject(A &abc){
    abc.g = 9999;
}

int main(int argc, char const *argv[])
{
    sho<string,double>("vishal",4.5555555555555555555);
    Power <int,double>p1;

    A abd;
    abd.g = 12;
    changingObject(abd);
    cout<<abd.g<<endl;
    return 0;
}
