#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++)
        if (arr[i] == key) return i;
    return -1;
}
// The next part is for linearSearch only.

int main(){
    int arr[100] = {12, 45, 67, 89, 34, 23, 90}; 
    
    // Define the actual number of elements and the key to search
    int n = 7;       
    int key = 34;    

    // Call the search function
    int result = linearSearch(arr, n, key);
    // Output the result
    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}


int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// This is for the Binary Search only.

int main() {
    // Note: The array must be sorted for binary search to work properly
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;  // Value required
    
    int result = binarySearch(arr, n, key);
    
    // Output the results
    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    
    return 0;
}
