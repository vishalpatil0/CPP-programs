/*
AND :   if you & two same numbers then result is the same number.
        if you & any number with 0 then it is 0.

OR  :   if you | any number with 0 then result is the that number.
        if you | two same numbers then result is the same number.

XOR :   if you ^ two same number then result is 0.
        if you ^ any number with 0 then result is same number.
*/

#include<iostream>
using namespace std;
int main()
{
    //The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1. 
    int a=2,b=3;
    cout<<"a&b --> "<<(a&b)<<endl; //10 11 =  10 = 2

    //The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
    cout<<"a|b --> "<<(a|b)<<endl; // 10 11 = 11 = 3

    //The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different.
    cout<<"a^b --> "<<(a^b)<<endl; //10 11 = 01 = 1

    // The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it
    cout<<"~a --> "<<(~a)<<endl; //10 = 01

    //binary left shift opearator
    
    /*Takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift. Or in other words left shifting an integer “x” with an integer “y” denoted as ‘(x<<y)’ is equivalent to multiplying x with 2^y (2 raised to power y). 
    eg: lets take N=22; which is 00010110 in Binary Form.
    Now, if “N is left-shifted by 2” i.e N=N<<2 then N will become N=N*(2^2). Thus, N=22*(2^2)=88 which can be wriiten as 01011000.*/
    cout<<"a<<1 --> "<<(a<<1)<<endl; //2 = [00000010] = [00000100] = 4 
    cout<<"a<<2 --> "<<(a<<2)<<endl; //2= [00000010] = [00001000]  = 8
    cout<<"a<<3 --> "<<(a<<3)<<endl; //2= [00000010] = [00010000]  = 16
    cout<<"a<<6 --> "<<(a<<6)<<endl; //2= [00000010] = [10000000]  = 128
    //Formula of left shift = x * 2^y OR if it is shifted by n then result is x^(n+1)
    //OR multiply x by 2 n times.


    //Right Shift Opeartor
    /*Right Shift :

    Denoted as : >>

    Eg: N>>i (N: first operand, i: second operand)

    Takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift. In other words right shifting an integer “x” with an integer “y” denoted as ‘(x>>y)‘ is equivalent to dividing x with 2^y. 

    eg: lets take N=32; which is 100000 in Binary Form.

     Now, if “N is right-shifted by 2” i.e N=N>>2 then N will become N=N/(2^2). Thus, N=32/(2^2)=8 which can be wriiten as 1000.*/

    cout<<"a>>1 --> "<<(a>>1)<<endl; //2 = 00000010 = 00000001 = 1 
    cout<<"a>>2 --> "<<(a>>2)<<endl; //2 = 00000010 = 00000000 = 0
    a=100;
    cout<<"a>>1 --> "<<(a>>3)<<endl; //2 = 00001000 = 00000100 = 4
    //formula : x / 2^y OR if it is shifted by n then result is x is divided by 2 N times.
    return 0;
}