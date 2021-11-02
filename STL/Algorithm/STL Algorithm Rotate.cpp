#include <algorithm>  
#include <iostream>  
#include <string>  
  
using namespace std;  
  
int main() {  
  string str = "Hello";  
  cout << "Before Rotate : "<< str << endl;  
    
  rotate(str.begin(), str.begin() + 5, str.end());  
  cout <<"After Rotate  : " << str << endl;  
    
  return 0;  
}  