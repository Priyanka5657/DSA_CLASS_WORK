// // qes.1  wap to check given string is palidrom or not ?

// #include <iostream>
// #include <algorithm>
// using namespace std;

// bool isPalindrome(const string &str) {
//     string reversed = str;
//     reverse(reversed.begin(), reversed.end());
//     return str == reversed;
// }

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;

//     if (isPalindrome(s)) {
//         cout << "The string is a palindrome.\n";
//     } else {
//         cout << "The string is not a palindrome.\n";
//     }

//     return 0;
// }

// // qes .2   wap to find second largest number in a vector ?
// #include <iostream>
// #include <vector>
// #include <limits> // For INT_MIN
// using namespace std;

// int findSecondLargest(const vector<int> &vec) {
//     // Check if the vector has less than 2 elements
//     if (vec.size() < 2) {
//         throw runtime_error("Vector must have at least two elements.");
//     }

//     int largest = INT_MIN, secondLargest = INT_MIN;

//     for (int num : vec) {
//         if (num > largest) {
//             // Update second largest and largest
//             secondLargest = largest;
//             largest = num;
//         } else if (num > secondLargest && num != largest) {
//             // Update second largest only
//             secondLargest = num;
//         }
//     }

//     // Handle the case where secondLargest remains INT_MIN
//     if (secondLargest == INT_MIN) {
//         throw runtime_error("No distinct second largest element found.");
//     }

//     return secondLargest;
// }

// int main() {
//     vector<int> vec = {10, 20, 4, 45, 99, 45};

//     try {
//         cout << "Second largest number: " << findSecondLargest(vec) << endl;
//     } catch (const exception &e) {
//         cout << "Error: " << e.what() << endl;
//     }

//     return 0;
// }



// // qes .3  wap to extract  character from given string ,if it is in upper case convert case ?

// #include <iostream>
// #include <string>
// using namespace std;

// void extractAndConvert(const string &str) {
//     for (char c : str) {
//         if (isalpha(c)) { // Check if character is alphabetic
//             if (isupper(c)) {
//                 cout << (char)tolower(c); // Convert uppercase to lowercase
//             } else {
//                 cout << c;
//             }
//         }
//     }
//     cout << endl;
// }

// int main() {
//     string s;
//     cout << "Enter a string: ";
//     getline(cin, s);

//     cout << "Extracted and converted string: ";
//     extractAndConvert(s);

//     return 0;
// }

 // wap to display  the sum of  the value of the values of a vector? order of n square
// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to calculate the sum of two vectors
// void sum(const vector<int> &v1, const vector<int> &v2) {
//     vector<int> result;

//     // Find the minimum size of the two vectors
//     int size = min(v1.size(), v2.size());

//     // Add corresponding elements of both vectors
//     for (int i = 0; i < size; i++) {
//         result.push_back(v1[i] + v2[i]);
//     }

//     // If v1 has extra elements, add them to the result
//     for (int i = size; i < v1.size(); i++) {
//         result.push_back(v1[i]);
//     }

//     // If v2 has extra elements, add them to the result
//     for (int i = size; i < v2.size(); i++) {
//         result.push_back(v2[i]);
//     }

//     // Print the resulting vector
//     cout << "Sum of vectors: ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;
// }

// int main() {
//     // Correctly initialize the vectors
//     vector<int> v1 = {1, 2, 4};
//     vector<int> v2 = {2, 1, 6};

//     // Call the sum function
//     sum(v1, v2);

//     return 0;
// }

// wap to remove duplicate values from vector? input:v[5,2,5,1,2,9,3] , ouput: [1,2,3,4,5,9]


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Input vector
    vector<int> v = {5, 2, 5, 1, 2, 9, 3};

    // Step 1: Sort the vector
    sort(v.begin(), v.end());

    // Step 2: Remove duplicates using std::unique
    auto last = unique(v.begin(), v.end());

    // Step 3: Resize the vector to remove the undefined values
    v.erase(last, v.end());

    // Output the result
    cout << "Vector after removing duplicates and sorting: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
