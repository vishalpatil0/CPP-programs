#include <iostream>


using namespace std;

int main()

{

//cout<<"hello";

char c;

c=cin.get();

while(c!='\n'){

cout<<c;

cin.get(c);

}



return 0;

}
