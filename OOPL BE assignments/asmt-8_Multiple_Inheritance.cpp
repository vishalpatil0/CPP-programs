#include<iostream>
using namespace std;
class personal
{
	string name,address,dob,email;
	public:
		void accept()
		{
			cout<<"Enter name"<<endl;
			getline(cin,name);
			cout<<"Enter address"<<endl;
			getline(cin,address);
			cout<<"Enter dob"<<endl;
			getline(cin,dob);
			cout<<"Enter email"<<endl;
			cin>>email;
		}
		void display()
		{
			cout<<"*******************************************"<<endl;
			cout<<"Name=\t\t"<<name<<endl;
			cout<<"Address=\t\t"<<address<<endl;
			cout<<"DOB=\t\t"<<dob<<endl;
			cout<<"Email=\t\t"<<email<<endl;
		}
};
class professional
{
	string empid,doj,sal,mob;
	public:
		void accept1()
		{
			cout<<"Enter Employe ID"<<endl;
			cin>>empid;
			cout<<"Enter doj"<<endl;
			cin.ignore();
			getline(cin,doj);
			cout<<"Enter sal"<<endl;
			cin>>sal;
			cout<<"Enter mob"<<endl;
			cin>>mob;
		}
		void display1()
		{
			cout<<"Employe ID=\t\t"<<empid<<endl;
			cout<<"Date of joining=\t\t"<<doj<<endl;
			cout<<"Salary=\t\t"<<sal<<endl;
			cout<<"MObile Number=\t\t"<<mob<<endl;
		}
};
class academy:public personal,public professional
{
	float ten,twelve;
	public:
		void accept2()
		{
			cout<<"Enter 10th percentage"<<endl;
			cin>>ten;
			cout<<"Enter 12th percentage"<<endl;
			cin>>twelve;
		}
		void display2()
		{
			cout<<"ten=\t\t"<<ten<<endl;
			cout<<"twelve=\t\t"<<twelve<<endl;
		}
};
int main()
{
	academy a;
	a.accept();
	a.accept1();
	a.accept2();
	a.display();
	a.display1();
	a.display2();
	return 0;
}
