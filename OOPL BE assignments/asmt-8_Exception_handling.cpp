#include<iostream>
using namespace std;
class A
{
	int age;
	double incm;
	string city;
	char fw;
	int c=0;
	public:
		void getage()
		{
			cout<<"Enter the age"<<endl;
			cin>>age;
			try
			{
			if(age<18 || age>55)
			{	
				throw(age);
			}
			else
			{
				c++;
			}
			}
			catch(int i)
			{
				cout<<"Age must between 18 to 55"<<endl;
			}
		}
		void getincm()
		{
			cout<<"Enter the income"<<endl;
			cin>>incm;
			try
			{
			if(incm<50000 || incm>100000)
			{	
				throw(incm);
			}
			else
			{
				c++;
			}
			}
			catch(double d)
			{
				cout<<"Income must be between 50000 to 100000"<<endl;
			}
		}
		void getcity()
		{
			cout<<"Enter the city"<<endl;
			cin>>city;
			try
			{
			if(city=="Pune"||city=="Mumbai"||city=="Bangalore"||city=="Chennai")
			{	
				c++;
			}
			else
			{
				throw(city);
			}
			}
			catch(string s)
			{
				cout<<"city must be pune or mumbai or bangalore or chennai"<<endl;
			}
		}
		void getfw()
		{
			cout<<"Does user have four wheeler"<<endl;
			cin>>fw;
			try
			{
			if(fw=='y' or fw=='Y')
			{	
				c++;
			}
			else
			{
				throw(fw);
			}
			}
			catch(char c)
			{
				cout<<"user must have four wheeler"<<endl;
			}
		}
		void print()
		{
			if(c==4)
			{
				cout<<"No incorrect data is provided"<<endl;
			}
		}
};
int main()
{
	A a;
	a.getage();
	a.getincm();
	a.getcity();
	a.getfw();
	a.print();
	return 0;
}
