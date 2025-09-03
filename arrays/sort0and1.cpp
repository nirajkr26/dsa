#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size = 9;
    int arr[size] = {1, 1, 0, 0, 1, 0, 0, 1, 1};
    int i = 0, j = size - 1;
    while (i <= j)
    {
        if (arr[i] == 0)
            i++;
        else if (arr[j] == 1)
            j--;
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    for (auto ele : arr)
    {
        cout << ele << " ";
    }
}