#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst;

    // Adding elements to the list
    lst.push_front(10);
    lst.push_back(2);

    // Printing the list
    for (auto p : lst)
    {
        cout << p << "\t";
    }

    // Adding more elements
    lst.push_back(3);
    lst.push_front(77);

    // Printing the updated list
    cout << "\n";
    for (auto p : lst)
    {
        cout << p << "\t";
    }

    cout << endl; // Ensure output ends cleanly
    return 0;     // Main function should return an integer
}
