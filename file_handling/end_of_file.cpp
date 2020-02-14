//this program write the whole contents of the file
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char ch;
	ifstream fin;
	fin.open("file1.txt",ios::in);
	while(!fin.eof())
	{
		fin>>ch;
		cout<<ch;
	}
	fin.close();
	return 2;
}
