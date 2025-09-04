#include <iostream>
using namespace std;

// to find first and last position of occurence an element in a sorted array

void firstOcc(int arr[], int size, int target)
{
    int first = -1;
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            high = mid - 1;
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
    cout << "First occurrence at index " << first << endl;
}

void lastOcc(int arr[], int size, int target)
{
    int last = -1;
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            low = mid + 1;
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
    cout << "Last occurrence at index " << last << endl;
}

int main()
{
    int size = 7;
    int arr[size] = {2, 3, 3, 4, 5, 6, 6};
    int target = 9;
    firstOcc(arr, size, target);
    lastOcc(arr, size, target);
}