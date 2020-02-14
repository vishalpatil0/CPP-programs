#include<iostream>
#include<fstream>

using namespace std;

class file_obj
{
	public:
		int roll;
		string name;
		void accept()
		{
			cout<<"Enter the roll number here"<<endl;
			cin>>roll;
			cout<<"Enter the name here"<<endl;
			cin>>name;
		}
		void display()
		{
			cout<<"Roll ="<<roll<<endl;
			cout<<"Name ="<<name<<endl;
		}
};
int main()
{
	int n;
	cout<<"Enter the number of student"<<endl;
	cin>>n;
	
	file_obj o[n];
	fstream file;
	file.open("file2.txt",ios::in|ios::out);
	cout<<"write the info of "<<n<<" students"<<endl;
	for(int i=0;i<n;i++)
	{
	o[i].accept();
	file.write((char*)&o,sizeof(o));
	}
	file.seekg(0); //reset the file pointer to the start of the file
	cout<<"stored info is"<<endl;
	for(int i=0;i<n;i++)
	{
	file.read((char*)&o,sizeof(o));//read from file
	o[i].display();
	}
	file.close();
	return 0;
}
