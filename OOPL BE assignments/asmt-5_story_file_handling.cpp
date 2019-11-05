#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	char line[200];
	int count;
	count=0;
	ofstream o;            //Write in file
	o.open("st.txt",ios::out);

	o<<"The Roses are red. \n";
	o<<"A girl in playing there. \n";
	o<<"There is a playground. \n";
	o<<"An aeroplane in the sky. \n";
	o<<"Number are not allowed in the password. ";

	o.close();
	ifstream i("st.txt");
	cout<<"Content of file\n"<<endl;
	while(!i.eof())
	{
		i.getline(line,200);
		cout<<line<<endl;
		if(line[0]!='A')
		{
			count++;
		}
	}
	cout<<"\n Total number of sentence count not start in A are : "<<count<<endl;
	i.close();
return 0;
}
