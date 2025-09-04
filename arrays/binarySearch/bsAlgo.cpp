#include <iostream>
using namespace std;

int binarySearch(int *arr, int size, int target)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size = 7;
    int arr[size] = {3, 5, 7, 9, 11, 13, 15};
    int target = 7;
    cout << binarySearch(arr, size, target);
}