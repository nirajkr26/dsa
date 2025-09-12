#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int m = 5, n = 4;
    int arr1[m] = {1, 2, 4, 4, 5};
    int arr2[n] = {4, 5, 7, 8};

    vector<int> v;

    // brute force
    /*
    for (int i = 0; i < m; i++)
    {
        int ele = arr1[i];
        for (int j = 0; j < n; j++)
        {
            if (ele < arr2[j])
                break;

            if (ele == arr2[j])
            {
                v.push_back(ele);
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    */

   //two pointer approach
    int i = 0, j = 0;

    while (i < m && j < n)
    {
        if (arr1[i] == arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else
            j++;
    }

    cout << "Intersection array\n";
    for (int ele : v)
    {
        cout << ele << " ";
    }
}