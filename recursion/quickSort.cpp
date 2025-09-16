#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
        if (arr[i] < pivot)
            count++;

    // placing pivot at right place
    int pivotIdx = s + count;
    swap(arr[s], arr[pivotIdx]);

    int i = s, j = e;
    while (i < pivotIdx && j > pivotIdx)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i < pivotIdx && j > pivotIdx)
            swap(arr[i++], arr[j--]);
    }

    return pivotIdx;
}

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    // sort left part
    quickSort(arr, s, p - 1);

    // sort right part
    quickSort(arr, p + 1, e);
}

int main()
{
    int n = 9;
    int arr[9] = {2, 4, 2, 2, 2, 2, 7, 3, 1};

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// https://drive.google.com/file/d/1HAnVDeq-8d_mYQxRsSi_53pIWHSzaskG/view?usp=sharing