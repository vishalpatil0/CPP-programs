#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string str="";
	string temp=str;
	reverse(str.begin(),str.end());
	if(temp==str) cout<<"hello"<<endl;
	return 0;
}