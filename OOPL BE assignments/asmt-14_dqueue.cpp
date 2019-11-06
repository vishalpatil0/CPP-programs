#include<iostream>
#include<deque>
using namespace std;
void showdq(deque<int> g)
{
	deque<int>::iterator it;
	for(it=g.begin();it!=g.end();it++)
	{
		cout<<*it<<"\t"<<endl;
	}
}
int main()
{
	deque<int> a;
	int ch;
	int b;
	char y;
	do
	{
		cout<<"\n\n**************Main Menu**************"<<endl;
		cout<<"\n1-Insert at begining\n2-Insert at last\n3-Delete at begining\n4-Delete at last"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter element to insert"<<endl;
				cin>>b;
				a.push_front(b);
				cout<<"Element in queue are"<<endl;
				showdq(a);
				break;
			case 2:
				cout<<"Enter element to insert"<<endl;
				cin>>b;
				a.push_back(b);
				cout<<"Element in queue are"<<endl;
				showdq(a);
				break;
			case 3:
				a.pop_front();
				cout<<"Element in queue are"<<endl;
				showdq(a);
				break;
			case 4:
				a.pop_back();
				cout<<"Element in queue are"<<endl;
				showdq(a);
				break;	
			
			default:
				cout<<"inalid choice"<<endl;
		}
		cout<<"enter y to continue"<<endl;
		cin>>y;
	}while(y=='y');
	cout<<"size of deque is "<<a.size()<<endl;
	cout<<"max size of deque is "<<a.max_size()<<endl;
	cout<<"Enter element'position to search"<<endl;
	cin>>b;
	cout<<a.at(b)<<endl;
	return 0;
}
	
