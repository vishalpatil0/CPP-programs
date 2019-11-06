//program to read file and write content output screen
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ifstream i;
	i.open("out.txt");
	while(!i.eof())
	{
		i.get(ch);
		cout<<ch;
	}
	i.close();
	return 0;
}
