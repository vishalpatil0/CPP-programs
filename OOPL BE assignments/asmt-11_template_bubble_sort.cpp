//in bubble sort firstly biggest element is placed at last position in sorting
#include<iostream>
using namespace std;
template<class T>
class abc
{
	public:
		T arr[100];
		int n;
		void accept()
		{
			cout<<"enter the number of elements"<<endl;
			cin>>n;
			cout<<"Enter the elements"<<endl;
			for(int i=0;i<n;i++)
			{
				cin>>arr[i];
			}
		}
		void sort()
		{
			T temp;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n-i-1;j++)
				{
					if(arr[j]>arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			cout<<"sorted array is as follow"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
};
int main()
{
	abc<int>obj1;
	abc<float>obj2;
	int ch;
	char y;
	do
	{
		cout<<"1-integer array \n2-float array"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				obj1.accept();
				obj1.sort();
				break;
			case 2:
				obj2.accept();
				obj2.sort();
				break;
			default:
				cout<<"invalid choice"<<endl;
		}
		cout<<"enter y to continue"<<endl;
		cin>>y;
	}while(y=='y');
	return 0;
}	
