#include<iostream>
using namespace std;
class calc
{
	public:
		int n1,n2,res,r;
		calc(int a,int b)
		{
			n1=a;
			n2=b;
		}
		void add()
		{
			res=n1+n2;
			cout<<"Addition is = "<<res<<endl;
		}
		void sub()
		{
			res=n1-n2;
			cout<<"Subtraction is = "<<res<<endl;
		}
		void mul()
		{
			res=n1*n2;
			cout<<"Multiplication is = "<<res<<endl;
		}
		void div()
		{
			res=n1/n2;
			r=n1%n2;
			cout<<"Quotient is = "<<res<<"\nReminder is = "<<r<<endl;
		}
};		
int main()
{
	int a,b;
	char ch;
	do{
		cout<<"Enter first number, operator and second number"<<endl;
		cin>>a>>ch>>b;
		calc c(a,b);
		switch(ch)
		{
			case '+':
					c.add();
					break;
			
			case '-':
					c.sub();
					break;
			case '*':
					c.mul();
					break;
			case '/':
					c.div();
					break;
			default:
					cout<<"Invalid choice"<<endl;
		}
		cout<<"Do you want to countinue(y/n)";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	return 0;
}
				

