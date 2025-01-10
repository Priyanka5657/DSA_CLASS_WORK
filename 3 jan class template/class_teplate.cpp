#include <iostream>
using namespace std;
template <typename cyb1, typename cyb2>
class bhopal {
    cyb1 a;
    cyb2 b;

public:
    cyb1 sum(cyb1 x, cyb2 y) {
        a = x;
        b = y;
        return <<a + b; // Assuming '+' operator is defined for these types
    }
};

int main() 
{
    bhopal<int, double> obj (6,8.9);// Example instantiation of template class
    // int x = 5;
    // double y = 3.2;
    // cout << "Sum: " << obj.sum(x, y) << endl;
    // return 0;
}
