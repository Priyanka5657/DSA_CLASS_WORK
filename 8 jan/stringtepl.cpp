#include <iostream>
#include <string>
#include <algorithm> // For reverse function
using namespace std;

int main() {
    string s = "cybrombhopal";
    char c[10] = {}; // Initialize char array to avoid garbage values
    s.copy(c, 3, 3); // Copy 3 characters starting from index 3
    c[3] = '\0'; // Null-terminate the char array to make it a proper C-string
    cout << c << "\n";

    for (auto k : s) { // Corrected syntax for range-based for loop
        cout << k << "\t";
    }

    reverse(s.begin(), s.end()); // Fixed typo: changed `s.send()` to `s.end()`
    cout << "\nafter reverse=" << s << "\n";

    string t1 = "bhopal";
    string t2 = "dehli";
    cout << "t1=" << t1 << "\t" << "t2=" << t2 << "\n";
    t1.swap(t2);
    cout << "swap t1=" << t1 << "\t" << "swap t2=" << t2 << "\n";

    return 0; // Added return statement for proper main function
}
