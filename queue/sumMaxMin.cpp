#include <iostream>
#include <queue>

using namespace std;

//find sum of maximum and minimum of all subarrays of size k

int solve(int arr[], int k, int size)
{
    deque<int> maxi(k), mini(k);

    //process first window
    for (int i = 0; i < k; i++)
    {
        //remove previous greater elements
        while (!maxi.empty() && arr[maxi.back()] >= arr[i])
        {
            maxi.pop_back();
        }
        //remove previous smaller elements
        while (!mini.empty() && arr[mini.back()] <= arr[i])
        {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
    }

    int sum = 0;
    sum += arr[maxi.front()] + arr[mini.front()];//front stores max and min of particular window

//process remaining window
    for (int i = k; i < size; i++)
    {
        //remove elements out of window size k
        while (!maxi.empty() && i - maxi.front() >= k)
        {
            maxi.pop_front();
        }
        while (!mini.empty() && i - mini.front() >= k)
        {
            mini.pop_front();
        }

//remove all previous greater and smaller elements
        while (!maxi.empty() && arr[maxi.back()] >= arr[i])
        {
            maxi.pop_back();
        }
        while (!mini.empty() && arr[mini.back()] <= arr[i])
        {
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

        sum += arr[maxi.front()] + arr[mini.front()];
    }

    return sum;
}

int main()
{

    int arr[7] = {2, 5, -1, -3, 4, 4, 6};
    int ans = solve(arr, 4, 7);
    cout << ans;
}