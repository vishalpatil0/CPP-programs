#include<iostream>
using namespace std;
class cube
{
		char name[30];
		int age;
	
	public:
		void getdata();
		void putdata();
};
void cube::getdata()
{
	cout<<"Enter the name and age"<<endl;
	cin>>name>>age;
}
void cube::putdata()
{
	cout<<"Name=\t"<<name<<"\tAge=\t"<<age<<endl;
}
const int s=3;
int main()
{
	cube c[s];
	for(int i=0;i<s;i++)
	{
		c[i].getdata();
	}
	cout<<endl;
	for(int i=0;i<s;i++)
	{
		c[i].putdata();
	}
	return 0;
}
	
			
