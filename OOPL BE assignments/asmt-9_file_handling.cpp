#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	string name;
	cout<<"Enter name to create file"<<endl;
	cin>>name;
	string data;
	ofstream o;
	o.open(name);
	if(!o)
	{
		cout<<"Error opening file"<<endl;
		exit(1);
	}
	cout<<"Write content to the file and ctrl+d to stop"<<endl;
	while(getline(cin,data))
	{
		if(data=="^d")
		{
			break;
		}
		o<<data<<endl;
	}
	o.close();
	ifstream i;
	
	i.open(name);
	cout<<"\nreading content from input file"<<endl;
	while(i)
	{
		getline(i,data);
		cout<<data<<endl;
	}
	i.close();
	return 0;
}
