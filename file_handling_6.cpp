//program to read total number of characters 
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream i;
	int count;
	char ch;
	i.open("out.txt");
	while(!i.eof())
	{
		i.get(ch);
		count++;
	}
	cout<<count<<endl;
	return 0;
}
