/*
Structure is a user defined data type which have different types of element.

No need of new keyword to create instance of structure.

Structure memebers are public by default.

value type means they are stored on stack

Reference type means they are stored on heap.

cannot be declared as protected.        
*/
#include<iostream>
#include<string.h>
using namespace std;
typedef struct Student
{
    int marks;
    int roll;
    char str[100];
    string nickname;

    Student()
    {
        cout<<"Default Constructor"<<endl; //get called everytime object get created
    }
    Student(int a,int b, string s)
    {
        marks=a;
        roll=b;
        nickname=s;
    }
}stud;

int main()
{
    struct Student s1;  //first way to create object of structure.
    s1.marks=99;
    s1.roll=16097;
    strcpy(s1.str,"Vishal Patil");

    stud s2;     //anothere way to create object.
    s2.marks=78;
    s2.roll=16092;
    strcpy(s2.str,"Namrata Badge");

    cout<<"Roll number of s1 is = "<<s1.roll<<endl;
    cout<<"Name  of s1 is = "<<s1.str<<endl;
    cout<<"Marks of s1 is = "<<s1.marks<<endl;
    cout<<"Roll number of s2 is = "<<s2.roll<<endl;
    cout<<"Name  of s2 is = "<<s2.str<<endl;
    cout<<"Marks of s2 is = "<<s2.marks<<endl;


    // stud s3={96,1606095,"Neha","Nehru"}; also create object of structure like that.

    // Creating instance of strcuture using parametric constructor.
    stud s4(89,1606084,"Yadnyesh"); //default constructor don't get called by creating instance using parametric constructor.
    return 0;
}