#include<iostream>
using namespace std;


class demo{
	public:
		int num;
	friend void operator<<(ostream& co, demo d);

	demo operator+(demo dm){
		demo dme;
		dme.num = -1 * dm.num;
		return dme;
	}

	void operator--(){
		this->num *= 10;
	}

	void --operator(){
		this->num *= 20;
	}

	void operator+=(demo &d2){
	this->num += d2.num;
}
};

void operator-(demo &dum){
	dum.num = -dum.num;
}


void operator<<(ostream& co, demo d){
	co<<d.num<<endl;
}


int main(int argc, char const *argv[])
{
	demo d;
	d.num = 12;
	-d;
	--d;
	d = d+d;
	cout<<d;

	demo d1;
	demo d2;
	d1.num = 20;
	d2.num = 30;

	d1 += d2;
	cout<<d1.num<<endl;
	return 0;
}
