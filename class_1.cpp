/*
Classes are template which don't have any memory allocated to it.

Only when you create object then only memory get allocated.

you can't directly access private member with the help of dot operator.
*/


#include<iostream>
using namespace std;
class s
{
	char name[20];
	int age=21;	//can also pass default value
	public: 
		void getdata();
		void putdata();
};
void s::getdata()
{
	cout<<"Enter the name"<<endl;
	cin>>s::name;
	cout<<"enter the age"<<endl;
	cin>>s::age;
}
void s::putdata()
{
	cout<<"Name is ="<<s::name<<endl<<"Age is "<<age<<endl;
	
}

class Demo			//Second Class
{
    public:			//all data members are public 
    int roll;
    string name;
}D2;		//created a objct directly here


int main()
{
	s s1;
	s1.getdata();
	s1.putdata();
	
	Demo d1={12,"vishal"}; 		//another way to create object and directly assigned values.
	//Avoid using this format create problem if there are private data members and if data is not passed in order [Type Casting Erros]

    cout<<"Roll number = "<<d1.roll<<endl;
    cout<<"Name = "<<d1.name<<endl;

	D2.roll=15;
	cout<<"D2.roll = "<<D2.roll<<endl;
	return 0;
}
