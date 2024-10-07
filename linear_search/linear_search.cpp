// linear_search.cpp : This file contains the 'main' function. Program execution begins and ends there.
//searching for a number


#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int found) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == found) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int found = 7;

    int result = linear_search(arr, size, found);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}



