#include <stdio.h>
#define MAX 100

void merge(int arr[], int low, int mid, int high) {
    int temp[MAX];
    int i = low, j = mid + 1, k = low;

    // Merge the two subarrays into temp
    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {                    
            temp[k++] = arr[j++];
        }
    }

    // Copy remaining elements of left subarray
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements of right subarray
    while (j <= high) {
        temp[k++] = arr[j++];
    }

    // Copy temp back to arr
    for (i = low; i <= high; i++) {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high) {  
    if (low < high) {
        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}