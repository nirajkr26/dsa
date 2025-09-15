#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {
    if (start > end) {
        return -1; 
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
        return mid; 
    } else if (arr[mid] > target) {
        return binarySearch(arr, start, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, end, target); 
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}