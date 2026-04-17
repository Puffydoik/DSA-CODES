#include <stdio.h>

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int insertStart(int arr[], int n, int val) {
    for (int i = n; i > 0; i--) arr[i] = arr[i - 1];
    arr[0] = val;
    return n + 1;
}

int insertPosition(int arr[], int n, int val, int pos) {
    if (pos < 0 || pos > n) return n;
    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val;
    return n + 1;
}

int deleteStart(int arr[], int n) {
    if (n == 0) return 0;
    for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
    return n - 1;
}

int deleteEnd(int arr[], int n) {
    return (n == 0) ? 0 : n - 1;
}

int deletePosition(int arr[], int n, int pos) {
    if (pos < 0 || pos >= n) return n;
    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    return n - 1;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    
    // Example usage:
    n = insertStart(arr, n, 5);
    n = insertPosition(arr, n, 25, 3);
    n = deleteStart(arr, n);
    n = deletePosition(arr, n, 2);
    
    printf("Final Array: ");
    display(arr, n);
    return 0;
}