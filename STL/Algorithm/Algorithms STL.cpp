#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
int main()
{
    int ar[]={1,2,3,4,5,6};
	sort(ar,ar+6,greater<int>()); //descending order sort
    
    int arr[]={12,45,2,6,8,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+length);
    cout<<"Binary Search for 8 = "<<binary_search(arr,arr+length,45)<<endl; //return true if element is present

    int a=12,b=34;
    
    cout<<"Maximum of two variables == "<<max(a,b)<<endl;
    cout<<"Minimum of two variables == "<<min(a,b)<<endl;

    swap(a,b);
    string str="Vishal";
    reverse(str.begin(),str.end());
    cout<<str<<endl;

    rotate(arr,arr+2,arr+length);
    for(int x:arr)
    {
        cout<<x<<endl;
    }
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i*i-9);
    }
    v1.push_back(7);
    auto bin=find(v1.begin(),v1.end(),7);
    v1.erase(bin);
    v1.insert(v1.end()-1,16);
    //minmax
    auto result= minmax(a,b);
    cout<<"MinMax = "<<result.first<<"---"<<result.second<<endl;
    cout<<"Minimum element = "<<*min_element(arr,arr+length)<<endl;
    cout<<"Maximum element = "<<*max_element(arr,arr+length)<<endl;

    cout<<"Minimum element = "<<*min_element(v1.begin(),v1.end())<<endl; //minimum element of vector.

    cout<<"Type of auto = "<<typeid(result).name()<<endl;

    auto v=upper_bound(v1.begin(),v1.end(),16);
    //lower bound returns the address of first element which is not less than provided element
    //upper bound returns the address of first element which is greater than provided element
    cout<<*v<<endl;
    cout<<count(v1.begin(),v1.end(),16)<<endl;  //count occurance of 16

    //merge
    int kr[]={1,2,3,4,5};
    int lr[]={10,20,30,40,50};
    vector <int> vct(10);
    merge(kr,kr+5,lr,lr+5,vct.begin());
    cout<<vct.size()<<endl;
    copy(kr,kr+5,vct.begin());
    // for(auto temp:vct) cout<<temp<<endl;
    cout<<vct.size()<<endl;

    replace(v1.begin(),v1.end(),16,999);
    remove(v1.begin(),v1.end(),999); //remove the first encountered value
    // for(auto batman:v1) cout<<batman<<endl;

    vector <int> pp(v1);
    cout<<"Before removing duplicates"<<endl;
    for(auto superman: v1) cout<<superman<<endl;   

    cout<<"After removing duplicates"<<endl;
    // sort(v1.begin(),v1.end());
    // v1.erase(unique(v1.begin(),v1.end()),v1.end());
    unordered_set<int> s1(v1.begin(),v1.end());
    v1.assign(s1.begin(),s1.end());
    unique(v1.begin(),v1.end());
    for(auto superman: v1) cout<<superman<<endl;   

    //another way of removing  ---> convert to set and reassign to vector
    //set<int> s( vec.begin(), vec.end() );
    // vec.assign( s.begin(), s.end() );

    //also unorderd_set to keep the order

    return 0;
}