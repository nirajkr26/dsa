#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
            start = mid + 1;
        else
            end = mid;
    }
    return start;
}

int bs(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main()
{
    int size = 5;
    int arr[size] = {3, 5, 17, 1, 2};
    int target = 2;
    int pivot = getPivot(arr, size);
    if (target >= arr[pivot] && target <= arr[size - 1])
    {
        cout << bs(arr, pivot, size - 1, target);
    }
    else
    {
        cout << bs(arr, 0, pivot - 1, target);
    }
}
