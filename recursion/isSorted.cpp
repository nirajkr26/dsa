#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)
{
    if (size <= 1)
        return true;

    if (arr[0] > arr[1])
        return false;
    else
    {
        return isSorted(arr + 1, --size);
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 7, 9};
    int size = 5;
    bool ans = isSorted(arr, size);
    if (ans)
        cout << "sorted";
    else
        cout << "unsorted";
}