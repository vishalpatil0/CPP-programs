#include<iostream>
#include<string.h>
#define max 300
using namespace std;
class Book
{
	char author[max];
	char title[max];
	char pub[max];
	int price;
	int numcop;
	public:
		Book();
		void add_book();
		int access_title(char a[]);
		void getdata(int);
		void display();
};
Book::Book()
{
	strcpy(author,"");
	strcpy(title,"");
	strcpy(pub,"");
	price=0;
	numcop=0;
}
void Book::display()
{
	cout<<"Title		:"<<title;
	cout<<"\nAuthor		:"<<author;
	cout<<"\nPublisher	:"<<pub;
	cout<<"\nPrice		:"<<price;
	cout<<"\nTotal Copies   :"<<numcop<<endl;
}
int Book::access_title(char a[])
{
	if(strcmp(title,a))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
void Book::add_book()
{
	cout<<"Title:\t";
	cin>>title;
	cout<<"\nAuthor:\t";
	cin>>author;
	cout<<"\nPublisher:\t";
	cin>>pub;
	cout<<"\nPrice:\t";
	cin>>price;
	cout<<"\nCopies Available:\t";
	cin>>numcop;
}
void Book::getdata(int n)
{
	if(numcop>=n)
	{
		cout<<"Cost of "<<n<<" book is RS. "<<(price*n);
	}
	else
	{
		cout<<"sorry insuffiecient copies"<<endl;
	}
}
int main()
{
	
	Book b[max];
	int n,i,j=0,ch;
	char y;
	char title[max];
	cout<<endl;
	int f;
	do{
	cout<<"\n**********Main Menu***********"<<endl;
	cout<<"\n1-Add book to stock\n2-Display all book with details\n3-Buy book"<<endl;
	cout<<"\nEnter your choice"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			b[j].add_book();
			j++;
			break;
		case 2:
			cout<<"\nTotal number of books are = "<<j<<endl;
			for(i=0;i<j;i++)
			{
				cout<<"\n******Book:"<<i+1<<"*******"<<endl;
				b[i].display();
			}
			break;
		case 3:
			cout<<"Enter the title of required book"<<endl;
			cin>>title;
			for(i=0;i<j;i++)
			{
				f=0;
				if(b[i].access_title(title))
				{
					cout<<"How many books"<<endl;
					cin>>n;
					b[i].getdata(n);
					break;
				}
				else
				{
					f=1;
				}
			}
			if(f==1)
			{
				cout<<"Book Unavailable"<<endl;
			}
			break;
		default:
			cout<<"Invalid choice"<<endl;
	}
	cout<<"\nEnter y to continue:";
	cin>>y;
	}while(y=='y');	
				
	return 0;
}
