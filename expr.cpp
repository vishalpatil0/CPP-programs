#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int segment(vector<int> v1, int x)
{
    int temp = x;
    vector<int> mini,record;
    int len = v1.size();
    bool Fina=false;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0+i; j < x+i; j++)
        {
            mini.push_back(v1.at(j));
            if(j==len-1)
            {
                Fina=true;
                break;
            }
        }
        record.push_back(*min_element(mini.begin(), mini.end()));
        mini.clear();
        if(Fina)
        {
            break;
        }
    }
    return *max_element(record.begin(), record.end());
}
int main()
{
    int x, n;
    cout << "Enter segment = ";
    cin >> x;
    cout << "Number of elements in the arrya = ";
    cin >> n;
    cout << "\nEnter the elements= " << endl;
    int temp;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v1.push_back(temp);
    }
    cout << "here is the answer \n"
         << endl;
    cout << segment(v1, x) << endl;
    return 0;
}