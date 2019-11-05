#include<iostream>
using namespace std;
class complex
{
	float img,real;
	public:	
		complex() //default constructor
		{
			img=0;
			real=0;
		}
		complex(float a,float b) //parameterized constructor
		{
			img=a;
			real=b;
		}
		complex operator+(complex c1) //operator overloading for addition
		{
			complex temp;
			temp.real=real+c1.real;
			temp.img=img+c1.img;
			return temp;
		}
		complex operator-(complex c1) //operator overloading for subtraction
		{
			complex temp;
			temp.real=real-c1.real;
			temp.img=img-c1.img;
			return temp;
		} 
		complex operator*(complex c1) //operator overloading for multiplication
		{
			complex temp;
			temp.real=(real*c1.real)-(img*c1.img);
			temp.img=(img*c1.real)+(real*c1.img);
			return temp;
		} 
		complex operator/(complex c1) //operator overloading for division
		{
			complex temp,c2;
			c2.img=-c1.img;
			float x;
			temp.real=(real*c1.real)-(img*(c2.img));
			temp.img=(real*c1.real)+(real*(c2.img));
			x=(c1.real)*(c1.real)+(c1.img)*(c1.img);
			temp.real=temp.real/x;
			temp.img=temp.img/x;
			return temp;
		}
		friend complex operator<<(ostream &a,complex &c1)
		//operator for printing complex number
		{
			a<<"("<<c1.real<<")"<<" + "<<"("<<c1.img<<"i"<<")";
			return c1;
		}
		friend complex operator>>(istream &a,complex &c1)
		//operator for reading complex number
		{
			cout<<"enter the real part"<<endl;
			a>>c1.real;
			cout<<"enter the imaginary part"<<endl;
			a>>c1.img;
			return c1;
		} 
};
int main()
{
	complex c1,c2,c3;
	int choice;
	char ans;
	do
	{
		cout<<"\nMenu"<<endl;
		cout<<"1-Addition\n2-subtraction\n3-Multiplication\n4-Division"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nFirst complex number"<<endl;
				cin>>c1;//function call
				cout<<"\nSecond complex number"<<endl;
				cin>>c2;//function call
				c3=c1+c2;
				cout<<"Addition is = ";
				cout<<c3;
				break;
			case 2:
				cout<<"\nFirst complex number"<<endl;
				cin>>c1;//function call
				cout<<"\nSecond complex number"<<endl;
				cin>>c2;//function call
				c3=c1-c2;
				cout<<"Subtraction is = ";
				cout<<c3;
				break;
			case 3:
				cout<<"\nFirst complex number"<<endl;
				cin>>c1;//function call
				cout<<"\nSecond complex number"<<endl;
				cin>>c2;//function call
				c3=c1*c2;
				cout<<"Multiplication is = ";
				cout<<c3;
				break;
			case 4:
				cout<<"\nFirst complex number"<<endl;
				cin>>c1;//function call
				cout<<"\nSecond complex number"<<endl;
				cin>>c2;//function call
				c3=c1/c2;
				cout<<"Division is = ";
				cout<<c3;
				break;
			default:
				cout<<"Inavalid choice"<<endl;
		}
		cout<<"\n\nEnter y to continue"<<endl;
		cin>>ans;
	}while(ans=='y');
	return 0;
}
						
