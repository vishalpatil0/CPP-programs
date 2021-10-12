/*
Random access fast
insertion deletion is slow
Insertion at the end fast

if it got full it will create new array and copy the element to it.
*/
#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &temp)
{
    cout << "Element of the vector are = " << endl;
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp.at(i) << endl;
    }
}

int main()
{
    vector<int> v1;
    int temp;
    if (v1.empty())
    {
        cout << "it is empty" << endl;
    }
    for (int i = 121; i < 126; i++)
    {
        v1.push_back(i);
    }
    display(v1);
    v1.shrink_to_fit();
    cout << "size = " << v1.size() << endl; //Returns the number of elements in the vector.
    //This is the number of actual objects held in the vector, which is not necessarily equal to its storage capacity.

    cout << "max size = " << v1.max_size() << endl;
    //Returns the maximum number of elements that the vector can hold.

    cout << "capacity = " << v1.capacity() << endl;
    //  capacity is little more than size and can change

    // v1.resize(3);
    // v1.resize(10,200); //enter 10 element of value 200 if there are alreay element present then just add 200 where element are not present.

    //accessing elements
    cout << v1.at(2) << endl;
    cout << v1[1] << endl;
    // front element
    cout << "Front element = " << v1.front() << endl;
    // back element
    cout << "Back element = " << v1.back() << endl;

    //Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
    int *ptr = v1.data();
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }

    //push_back add element to the end
    //pop_back remove the last element

    // v1.erase(v1.begin()+3); //erase the 4 element.
    // v1.erase(v1.begin(),v1.begin()+3); //erase first 4 element.

    // v1.clear(); //Removes all elements from the vector (which are destroyed), leaving the container with a size of 0.

    vector<int> v2(5, 876); // 5 integer with value of 876
    v1.swap(v2);

    cout << "Iterative display" << endl;
    for (vector<int>::reverse_iterator i = v2.rbegin(); i != v2.rend(); i++)
    {
        cout << *i << endl;
        // *i=345;
    }

    //insert method.
    v2.insert(v2.begin() + 3, 3, 6573); //takes position in the form of iterator.
    // 1- position 2- number of elememnt 3- element
    v2.insert(v2.end() - 3, v1.begin(), v1.end()); //copies the range of element of one vector.
    display(v2);

    vector<char> v3(10); //element of 10 element.

    for (int i = 0; i < v3.size(); i++) v3[i] = char(i * i);

    vector<char> v4(v3);
    display(v4);
    return 0;
}