#include<iostream>
#include<fstream>
#define max 100
using namespace std;

//writing and reading  data to/from file

struct std1
{
	int roll;
	string name;
};
int main()
{

	string a,b;
	std1 s;
	ofstream fout;
	fout.open("file1.txt",ios::out);
	if(fout)
	{
		cout<<"Enter roll here"<<endl;
		cin>>s.roll;
		fout<<s.roll;
		cout<<"Enter name here"<<endl;
		cin>>s.name;
		fout<<s.name;
		cout<<"Successfully wrote data to file name file1.txt"<<endl;
	}
	else
	{
		cout<<"Error "<<endl;
	}
	fout.close();
	ifstream fin;
	fin.open("file1.txt",ios::in);
	if(fin)
	{
		fin>>a;
		fin>>b;
		cout<<"Roll= "<<s.roll<<endl;
		cout<<"Name= "<<s.name<<endl;
	}
	fin.close();
	return 0;
}
		
		
