#include<iostream>
#include<math.h>
using namespace std;
class quadratic
{
	
	int a,b,c,x;
	public:
		quadratic()
		{
			a=0;
		        b=0;
		        c=0;
		}
		friend quadratic operator>>(istream &qin,quadratic q);
		friend quadratic operator<<(ostream &qout,quadratic q);
		quadratic operator+(quadratic q);
		void evaluate();
		void root();
};
quadratic operator>>(istream &qin,quadratic q1)
{
	cout<<"Enter the value for a , b and c"<<endl;
	qin>>q1.a>>q1.b>>q1.c;
	return q1;
}
quadratic operator<<(ostream &qout,quadratic q1)
{
	qout<<q1.a<<"x*x+"<<q1.b<<"x+"<<q1.c<<endl;
	return q1;
}
quadratic quadratic::operator+(quadratic q)
{
	quadratic temp;
	temp.a=a+q.a;
	temp.b=b+q.b;
	temp.c=c+q.c;
	return temp;
}
void quadratic::evaluate()
{
	cout<<"Enter the value for x"<<endl;
	cin>>x;
	double res=(a*x*x)+(b*x)+c;
	cout<<"Result="<<res<<endl;
}
void quadratic::root()
{
	double rs=(b*b)-(4*a*c);
	if(rs>0)
	{
		cout<<"Root are real and different"<<endl;
		double root1=(-b+sqrt(rs))/(2*a);
		double root2=(-b-sqrt(rs))/(2*a);
		cout<<"Root1="<<root1<<endl;
		cout<<"Root2="<<root2<<endl;
	}
	else if(rs==0)
	{
		cout<<"roots are real and equal"<<endl;
		double root1=-b/2*a;
		cout<<"Root="<<root1<<endl;
	}
	else
	{
		cout<<"Roots are complex and different"<<endl;
	       	double real = -b/2*a;
        	double img = sqrt(-rs)/2*a;
        	cout<<"Root1="<<real<<"+"<<img<<"i"<<endl;
        	cout<<"Root2="<<real<<"-"<<img<<"i"<<endl;
    	}
}
int main()
{
    quadratic qt1,qt2,qt3;
    cout<<"Enter the values of first quadratic:";
    cin>>qt1;
    cout<<"Enter the values of second quadratic:";
    cin>>qt2;
	cout<<qt1;
	cout<<qt2;
    qt3 = qt1 + qt2;
    cout<<"Resulting Quadratic="<<endl;
    cout<<qt3;

    qt3.evaluate();
    cout<<"Roots of Resulting Quadratic"<<endl;
    qt3.root();

    return 0;
}
