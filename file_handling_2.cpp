#include <iostream>



using namespace std;

int main()

{

cout<<"enter line"<<"\n";

char c;

c=cin.get();

while(c!='\n'){

cout.put(c);

cin.get(c);

}

cout<<"\n";

cout.put(65);


return 0;

}
