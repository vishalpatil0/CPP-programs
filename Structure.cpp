/*
Structure is a user defined data type which have different types of element.
*/
#include<iostream>
#include<string.h>
using namespace std;
typedef struct Student
{
    int marks;
    int roll;
    char str[100];
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

    return 0;
}