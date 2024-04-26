#include <iostream>
#include <set>
using namespace std;

//set<kiểu dữ liệu> tên biến;
//tương đương map nhưng chỉ lưu 1 biến

int main()
{
    // Create a set of integers
    set<int> mySet;


    // Insert elements into the set
    mySet.insert(3);
    mySet.insert(5);
    mySet.insert(1);
    mySet.insert(9);


    // Print the elements of the set
    for (auto it = mySet.begin(); it != mySet.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;


    // Check if an element is in the set
    if (mySet.find(5) != mySet.end())
    {
        cout << "5 is in the set" << endl;
    }
    else
    {
        cout << "5 is not in the set" << endl;
    }


    // Erase an element from the set
    mySet.erase(1);


    // Print the elements of the set again
    for (auto it = mySet.begin(); it != mySet.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;


    // Get the size of the set
    cout << "Size of the set: " << mySet.size() << endl;


    // Clear the set
    mySet.clear();


    // Check if the set is empty
    if (mySet.empty())
    {
        cout << "The set is empty" << endl;
    }
    else
    {
        cout << "The set is not empty" << endl;
    }
}

