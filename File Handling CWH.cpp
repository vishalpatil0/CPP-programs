/*
fstreambase class
ifstream
ofstream

2 ways to work with file(open)
1-constructor
2-member function open() of the class
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //opeoning file with the help of constructor.
    // ofstream out("TextFile1.txt");
    // //writing in file
    // out<<"hello my first text file";

    // string data;
    // ifstream in("TextFile1.txt");
    // // in>>data; read only until whitespace or newline character.
    // getline(in,data);
    // cout<<data;

    //using open method
    // fstream out("TextFile1.txt");
    // out<<"hello there";
    // string sr;
    // out>>sr;
    // cout<<sr<<endl;
    // out.close();
    ifstream out("TextFile1.txt");
    string temp;
    while(out.eof()==0)
    {
        getline(out,temp);
        cout<<temp<<endl;
    }
    return 0;
}