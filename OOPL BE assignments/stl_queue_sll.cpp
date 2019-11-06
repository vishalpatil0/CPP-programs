#include<iostream>
#include<list>
using namespace std;
class queue
{
	public:
		int a;
		list<int>s;
		list<int>::iterator itr;
		void push()
		{
			cout<<"Enter element"<<endl;
			cin>>a;
			s.push_back(a);
		}
		void display()
		{
			for(itr=s.begin();itr!=s.end();itr++)
			{
				cout<<*itr<<endl;
			}
		}
		void pop()
		{
			itr=s.begin();
			s.pop_front();
			cout<<"pop element is "<<*itr<<endl;
		}
};
int main()
{
	queue s;
	int ch;
	char ans;
	do{
		cout<<"1-Add element\n2-delete element\n3-display"<<endl;
		cout<<"Enter choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				s.push();
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.display();
				break;
			default:
				cout<<"Invalid choice"<<endl;
		}
		cout<<"enter y to continue"<<endl;
		cin>>ans;
	}while(ans=='y');
	return 0;
}
