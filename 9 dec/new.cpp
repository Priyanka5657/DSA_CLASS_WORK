#include <iostream>
using namespace std;

// Function to calculate the sum of the array
int sum(int arr[], int t) {
    int s = 0;
    for (int i = 0; i < t; i++) {
        s = s + arr[i];
    }
    return s;
}

// Bubble Sort function to sort the array
void bubble(int arr[], int t) {
    for (int i = 0; i < t - 1; i++) {
        for (int j = 0; j < t - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Initial array
    int s = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array

    // Print the original array
    cout << "Original array:\n";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << "\t";
    }

    // Calculate and print the sum of the array
    cout << "\nSum of the array: " << sum(arr, s) << endl;

    // Apply bubble sort
    cout << "\nAfter applying bubble sort:\n";
    bubble(arr, s);

    // Print the sorted array
    for (int i = 0; i < s; i++) {
        cout << arr[i] << "\t";
        
    }

    return 0;
}



