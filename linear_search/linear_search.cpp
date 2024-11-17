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


