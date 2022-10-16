#include<iostream>
using namespace std;
class cube
{
	private:
		int data1;
		char data2;
	public:
		void getdata(int a,char b)
		{
			data1=a;
			data2=b;
		}
		void putdata()
		{
			cout<<"The name is "<<data2<<endl;
			cout<<"The age is "<<data1<<endl;
		}
		void fnPointer(void (*fptr)()){
			fptr();
		}
};
int main()
{
	cube *c;
	c->getdata(19,'a');
	c->putdata();
	c->fnPointer(c->putdata);
	delete c;
	return 0;
}

