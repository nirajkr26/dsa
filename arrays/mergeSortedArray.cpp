#include <iostream>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n, int arr[])
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            arr[k++] = arr1[i++];
        else
            arr[k++] = arr2[j++];
    }

    while (i < m)
    {
        arr[k++] = arr1[i++];
    }

    while (j < n)
    {
        arr[k++] = arr2[j++];
    }
}

int main()
{
    int arr1[5] = {1, 2, 5, 6, 9};
    int arr2[6] = {3, 7, 8, 9, 13, 19};
    int arr[11] = {0};
    merge(arr1, 5, arr2, 6, arr);

    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }
}