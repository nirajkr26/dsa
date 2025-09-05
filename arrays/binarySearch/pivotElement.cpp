#include <iostream>
using namespace std;

/*

        .
       . |
      .  |     .
     .   |    .
    .    |   .
         |  .
         | .
         .
*/

int pivot(int arr[], int size)
{
    int low = 0, high = size - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= arr[0])
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int main()
{
    int size = 5;
    int arr[size] = {8, 10, 0, 1, 3};
    cout << "Pivot is " << pivot(arr, size) << endl;
}
