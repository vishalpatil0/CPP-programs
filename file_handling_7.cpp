//program to copy content of one file to another file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{	
	char ch;
	ifstream i;
	i.open("out.txt");
	ofstream o;
	o.open("sample.txt");
	while(!i.eof())
	{
		i.get(ch);
		o<<ch;
	}
	i.close();
	o.close();
	i.open("sample.txt");
	while(!i.eof())
	{
		i.get(ch);
		cout<<ch;
	}
	i.close();
	return 0;
};
