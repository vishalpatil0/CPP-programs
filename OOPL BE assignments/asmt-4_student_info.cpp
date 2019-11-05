#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class data
{
	string name,dob,bg,add,no;
	int height,weight;
	public:
		data()
		{
			name="";
			dob="00-00-0000";
			bg="";
			add="";
			no="";
			height=0;
			weight=0;
		}
		static int count;
		friend class student;
		static void dispcount()
		{
			cout<<"\n\nTotal number of records created: "<<count<<endl;
		}
};
class student
{
	string policy_no,license_no;
	public:
		student()
		{
			policy_no="";
			license_no="";
		}
		friend class data;
		void getdata(data *b);
		void putdata(data *b);
};
inline void student::getdata(data *b)
{
	cout<<"\nEnter detail"<<endl;
	cout<<"***************************"<<endl;
	cout<<"\nName:";
	cin.ignore();
	getline(cin,b->name);
	cout<<"\nData of birth:";
	getline(cin,b->dob);
	cout<<"\nAddress:";
	getline(cin,b->add);
	cout<<"\nTelephone Number:";
	getline(cin,b->no);
	cout<<"\nBlodd Group:";
	getline(cin,b->bg);
	cout<<"\nHeight:";
	cin>>b->height;
	cout<<"\nweight:";
	cin>>b->weight;
	cin.ignore();
	cout<<"\nDriving license number:";
	getline(cin,this->license_no);
	cout<<"\nPolicy Number:";
	getline(cin,this->policy_no);
	b->count++;
}
inline void student::putdata(data *b)
{
	cout<<"\n\n------------------------------------------------"<<endl;
	cout<<"Student information"<<endl;
	cout<<"\n----------------------------------------------------------"<<endl;
	cout<<"\nName                      :"<<b->name;
	cout<<"\nDate of birth             :"<<b->dob;
	cout<<"\nAddress                   :"<<b->add;
	cout<<"\nBloodGroup                :"<<b->bg;
	cout<<"\nWeight                    :"<<b->weight;	
	cout<<"\nHeight                    :"<<b->height;
	cout<<"\nDriving License Number    :"<<this->license_no;
	cout<<"\nPolicy Number    :"<<this->policy_no;
}
int data::count=0;
int main()
{
	student *a[10];
	data *c[10];
	int n=0,i,choice;
	char y;
	do
	{
		cout<<"main menu"<<endl;
		cout<<"\n1-create\n2-Display"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				do
				{
					a[n]=new student;
					c[n]=new data;
					a[n]->getdata(c[n]);
					n++;
					data::dispcount();
					cout<<"do you want to add more record"<<endl;
					cin>>y;
				}while(y=='y');
				break;
			case 2:
				for(int i=0;i<n;i++)
				{
					a[i]->putdata(c[i]);
					data::dispcount();
				}
				break;
			default:
				cout<<"Invalid choice"<<endl;
		}
		cout<<"Do you want to continue"<<endl;
		cin>>y;
	}while(y=='y');
	return 0;
}
