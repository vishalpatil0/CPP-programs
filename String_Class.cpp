/*
C++ has in its definition a way to represent sequence of characters as an object of class. This class is called std:: string. String class stores the characters as a sequence of bytes with a functionality of allowing access to single byte character. 

In string class object we can't use string.h object.

Internally it stores the string as character of array so you can change it like str[1]='z'  or can access it like str[i]

at(X) -- return the character at position X in the string. Similar to using the [] operator

str1.compare(str2) -- performs a comparison, like the c-string function strcmp. A negative return means str1 comes first. Positive means str2 comes first. 0 means they are the same

str1.compare(str2, X, Y) -- compares the portions of the strings that begin at index X and have length Y. Same return value interpretation as above

str.insert(X, Y, CH) -- inserts the character CH into string str Y times, starting at position X

str.insert(X, str2) -- inserts str2 (string object or char array) into str at position X

str.find(str2, X) -- returns the first position at or beyond position X where the string str2 is found inside of str
str.find(CH, X) -- returns the first position at or beyond position X where the character CH is found in str
*/

#include<iostream>
#include<string.h>
#include<algorithm>
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
    /*this function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.
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

    s1.append(" Patil"); //add this string to the back of s1.

    s1.assign("Yogesh"); //change the string.

    string s("Vishal");
    string s2(s);           //also create string in this format.

    getline(cin,s,',');     //this will only read upto comma normally it is upto newline.

    for (int i = 0; i < s.length(); i++)
    {
        cout<<s[i]<<endl;       //printing character by character
    }

    s[0]='Z';
    s.clear();                  //create empty string

    cout<<s.empty()<<endl;     //return true if the string is currently empty, false otherwise

    s=s.substr(2,4); //starting position and number of character from that position. can pass starting position only

    string temp_1="My name is vishal.";
    int pos=temp_1.find('v');
    temp_1.replace(pos,6,"Namrata"); //replace the vishal in temp_1 with namrata.

    int p=temp_1.find("is");
    cout<<p<<endl;

    string str3="VISHAL PATIL";
    //lower case conversion
    transform(str3.begin(),str3.end(),str3.begin(),::tolower);
    cout<<str3<<endl;
    return 0;
}