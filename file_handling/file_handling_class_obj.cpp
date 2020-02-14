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
	file_obj o;
	fstream file;
	file.open("file2.txt",ios::in|ios::out);
	o.accept();
	file.write((char*)&o,sizeof(o));
	file.seekg(0); //reset the file pointer to the start of the file
	file.read((char*)&o,sizeof(o));//read from file
	o.display();
	file.close();
	return 0;
}
