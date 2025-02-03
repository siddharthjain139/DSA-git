
// Write a C++ program that performs various operations on an array, including reversal, checking if the array is sorted, and finding the maximum and minimum elements. The program should:

// Initialize an array of a fixed size (e.g., 10) and allow the user to populate it with integer values.
// Implement the following functionalities:
// Reverse the array and display the reversed array.
// Check if the array is sorted in ascending order and display an appropriate message.
// Find and display the maximum and minimum elements in the array.
// Allow the user to display the original array at any point.



#include<bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;


void displayArray(const vector<int>& arr, const string& message = "Current Array: ") {
    cout << message;
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}


void reverseArray(vector<int>& arr) {
    reverse(arr.begin(), arr.end());
}

bool isSorted(const vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}


int findMax(const vector<int>& arr) {
    if (arr.empty()) {
        cerr << "Error: Cannot find maximum of an empty array." << endl;
        return -1; 
    }
    return *max_element(arr.begin(), arr.end());
}


int findMin(const vector<int>& arr) {
    if (arr.empty()) {
        cerr << "Error: Cannot find minimum of an empty array." << endl;
        return -1; 
    }
    return *min_element(arr.begin(), arr.end());
}

int main() {
    const int ARRAY_SIZE = 10;
    vector<int> arr(ARRAY_SIZE);

    cout << "Enter " << ARRAY_SIZE << " integer values for the array:" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cin >> arr[i];
    }

    int choice;
    do {
        displayArray(arr, "Original Array: "); 

        cout << "\nArray Operations Menu:" << endl;
        cout << "1. Reverse the array" << endl;
        cout << "2. Check if the array is sorted" << endl;
        cout << "3. Find maximum and minimum elements" << endl;
        cout << "4. Display the array" << endl;  
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                reverseArray(arr);
                displayArray(arr, "Reversed Array: ");
                break;
            case 2:
                if (isSorted(arr)) {
                    cout << "The array is sorted in ascending order." << endl;
                } else {
                    cout << "The array is not sorted in ascending order." << endl;
                }
                break;
            case 3: {
                int maxVal = findMax(arr);
                int minVal = findMin(arr);
                if (maxVal != -1 && minVal != -1) { 
                    cout << "Maximum element: " << maxVal << endl;
                    cout << "Minimum element: " << minVal << endl;
                }
                break;
            }
            case 4:
                break; 
            case 0:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl; 

    } while (choice != 0);

    return 0;
}