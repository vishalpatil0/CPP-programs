/*
            ---------Base--------
            |                   |
           Class A           Class B
            |                   |
            |_______Derived_____|

Here variables of base class get derived to derived class through more than 1 way so it creates ambiguity

so to resolve this virtual base comes into existence.

*/
#include<iostream>
using namespace std;
class Student{
    protected:
        int roll;
    public: 
            Student(){
                cout<<"Class Student constructor"<<endl;
            }
            void set(int a)
            {
                roll=a;
            }
            void get()
            {
                cout<<"your roll number is "<<roll<<endl;
            }
};
class Test: virtual public Student{
    protected:
        float math,physics;   
    public:
        void setMarks(float m1,float m2)
        {
            math=m1;
            physics=m2;
        }
        void getMarks()
        {
            cout<<"The result is "<<endl
                <<"Mathematics = "<<math<<endl
                <<"Physics = "<<physics<<endl;
        }
};
class Sports: virtual public Student
{
    protected:
    float score;
    public:
    void set_score(float sc)
    {
        score=sc;
    }
    void print_score()
    {
        cout<<"your pt score is = "<<score<<endl;
    }
};
class Result : public Test, public Sports
{
    private:
    float total;
    public:
        void display()
        {
            cout<<"Roll number is = "<<roll<<endl;
            total=math+physics+score;
            getMarks();
            print_score();
            cout<<"your total score is = "<<total<<endl;
        }
};
int main()
{
    Result r;
    r.set(1606097);
    r.setMarks(98.9,97.7);
    r.set_score(99);
    r.display();
    return 0;
}