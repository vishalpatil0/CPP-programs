/*
C++ has in its definition a way to represent sequence of characters as an object of class. This class is called std:: string. String class stores the characters as a sequence of bytes with a functionality of allowing access to single byte character. 

In string class object we can't use string.h object.
*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s1;

    cout<<"Enter string 1 = ";
    // fgets(s1,100,stdin); we can't use here this function to get string.


    // cin<<s1; // Don't use this bcoz insertion opeartor stop taking string after it hits the whitespace character.

    getline(cin,s1);        //this is the right way to read a string.


    s1.push_back('Z');      //push character at back of string.
    
    cout<<"String 1 = "<<s1<<endl;

    s1.pop_back();

    cout<<"After using pop_back function on string 1 = "<<s1<<endl;

    cout<<"Capacity of s1 is = "<<s1.capacity()<<endl;
    /*his function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.
    Normally there is more space as required.*/
    

    s1.resize(20);
    cout<<s1<<endl; //as you can see some part of the string is cut out.

    cout<<"The length of string is =  "<<s1.length()<<endl;

    s1.shrink_to_fit(); //shrink to required size to save memory.

    
    //     Iterator Functions
    // 8. begin() :- This function returns an iterator to beginning of the string.
    // 9. end() :- This function returns an iterator to end of the string.
    // 10. rbegin() :- This function returns a reverse iterator pointing at the end of string.
    // 11. rend() :- This function returns a reverse iterator pointing at beginning of string.

    //iterator is nothing but a pointer
    
    //pringint string using loops
    for (string::iterator it = s1.begin(); it!=s1.end(); it++)
    {
        cout<<*it;
    }
    cout<<endl;

    //printing string in reverse order
    for (string::reverse_iterator it = s1.rbegin(); it!=s1.rend(); it++)
    {
        cout<<*it;
    }
    cout<<endl;

    char arr[100];

    s1.copy(arr,5,5);       //copies string class object string in character array with length startng from given position.
    puts(arr);

    string s2="Namrata";
    s1="Vishal";
    s2.swap(s1); //swap with another.
    cout<<s1<<s2<<endl;
    return 0;
}