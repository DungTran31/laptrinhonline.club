#include <iostream>
#include <vector>
using namespace std;

//vector<kiểu dữ liệu> tên biến;

int main()
{
    // Create a vector of integers
    vector<int> myVector;


    // Add some values to the vector
    myVector.push_back(5);
    myVector.push_back(10);
    myVector.push_back(15);


    // Access elements in the vector
    cout << "The first element in the vector is: " << myVector[0] << endl;
    cout << "The second element in the vector is: " << myVector[1] << endl;


    // Change an element in the vector
    myVector[1] = 20;


    // Remove an element from the vector
    myVector.pop_back();


    // Get the size of the vector
    cout << "The size of the vector is: " << myVector.size() << endl;


    // Print out all the elements in the vector
    for (int i = 0; i < myVector.size(); i++)
    {
        cout << "Element " << i << ": " << myVector[i] << endl;
    }

}