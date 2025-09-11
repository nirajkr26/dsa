#include <iostream>
using namespace std;

void moveZeroes(int arr[], int size)
{
    int i = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

int main()
{
    int arr[8] = {1, 0, 3, 2, 0, 0, 5, 4};

    moveZeroes(arr, 8);

    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";
}