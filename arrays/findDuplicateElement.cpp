#include <iostream>
using namespace std;

int main()
{
    int size = 7;
    int arr[7] = {1, 2, 4, 6, 4, 3, 5};
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans ^= i;
    }

    cout << "Duplicate element - " << ans;
}