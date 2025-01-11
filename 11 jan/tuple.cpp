#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main()
{
    vector<tuple<int, string, int, int>> v; // Vector of tuples
    int roll, age, mob, n;
    string nm;

    cout << "\nHow many records?\n";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter rollno, name, age, mobileno:\n";
        cin >> roll >> nm >> age >> mob;
        v.push_back({roll, nm, age, mob}); // Add tuple to the vector
    }

    cout << "\nRecords are:\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << "Rollno=" << get<0>(v[i]) << "\t";
        cout << "Name=" << get<1>(v[i]) << "\t";
        cout << "Age=" << get<2>(v[i]) << "\t";
        cout << "Mobileno=" << get<3>(v[i]) << "\n";
    }

    return 0; // Properly terminate the program
}


// qes.1  wap to check given string is palidrom or not ?

#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isPalindrome(s)) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is not a palindrome.\n";
    }

    return 0;
}

// qes .2   wap to find second largest number in a vector ?

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findSecondLargest(const vector<int> &vec) {
    if (vec.size() < 2) {
        throw runtime_error("Vector must have at least two elements.");
    }

    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int num : vec) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }

    return secondLargest;
}

int main() {
    vector<int> vec = {10, 20, 4, 45, 99, 45};

    try {
        cout << "Second largest number: " << findSecondLargest(vec) << endl;
    } catch (const exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}

// qes .3  wap to extract  character from given string ,if it is in upper case convert case ?

#include <iostream>
#include <string>
using namespace std;

void extractAndConvert(const string &str) {
    for (char c : str) {
        if (isalpha(c)) { // Check if character is alphabetic
            if (isupper(c)) {
                cout << (char)tolower(c); // Convert uppercase to lowercase
            } else {
                cout << c;
            }
        }
    }
    cout << endl;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Extracted and converted string: ";
    extractAndConvert(s);

    return 0;
}
