//program to create file and write content to file 
#include <fstream>

using namespace std;

int main()
{

fstream fout;

fout.open("out1.txt");

char str[300] = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";

//Write string to the file.

fout<<str;

fout.close();

return 0; }
