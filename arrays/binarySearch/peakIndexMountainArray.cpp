#include <iostream>
using namespace std;

// int peakIndex(int arr[], int size)
// {
//     int low = 1, high = size - 2;
//     while (low <= high)
//     {
//         int mid = low + (high - low) / 2;
//         if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
//             return mid;
//         else if (arr[mid] < arr[mid + 1])
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return -1;
// }

int peakIndex(int arr[], int size)
{
    int low = 0, high = size - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < arr[mid + 1])
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int main()
{
    int size = 5;
    int arr[size] = {3, 5, 8, 2, 0};
    cout << peakIndex(arr, size);
}