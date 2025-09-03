#include <iostream>
using namespace std;

int main()
{
    int size = 7;
    int arr[7] = {4, 5, 2, 5, 2, 6, 6};
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "Unique element - " << ans;
}