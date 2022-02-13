#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the size of row --> ";
    cin>>row;
    cout<<"\nEnter the size of column --> ";
    cin>>col;

    int **arr=new int*[row];
    for (int i = 0; i < row; i++)
    {
        arr[i]=new int[col];
    }

    int k=1;
    //entering the data in array;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j]=k++;
        }
    }
    //printing the data from array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }

    //realising the memory
    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];
    } 
    delete [] arr;
    return 0;
}