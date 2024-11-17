#include <iostream>
#include "linear_search.hpp"  

using namespace std;

int main() {
    int arr[] = { 10, 20, 30, 40, 50 };  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);  
    int found = 30;  // The number to search 

    int result = linear_search(arr, size, found);  

    if (result != -1) {
        cout << "Element found at index: " << result << endl;  
    }
    else {
        cout << "Element not found." << endl;  
    }

    return 0;
}
