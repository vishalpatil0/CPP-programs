/*
Static variable or array values are assigned before program execution
we can't change the size dynamically.

*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    //Dynamically created array using stdlib library.
    int *arr;
    arr=(int *)malloc(sizeof(int));
    *arr=12;
    cout<<*arr<<endl;
    free(arr);

    //creation of variable using new keword
    int *prr;
    prr=new int(2); //2 is the value of variable
    cout<<*prr<<endl;
    delete prr; //de allocation of dynamically created memory.

    //creation of array
    int *ar=new int[3];
    ar[0]=11;
    ar[1]=22;
    ar[2]=33;
    for (int i = 0; i < 3; i++)
    {
        cout<<ar[i]<<endl;
    }
    //delete contigous block of memory
    delete[] ar;
    return 0;
}