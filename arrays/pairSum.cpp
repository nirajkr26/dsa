#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size = 6;
    int arr[size] = {2, 1, 3, 4, 6, 5};
    int target = 7;

    vector<vector<int>> v;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                v.push_back(temp);
            }
        }
    }

    for (auto pair : v)
    {
        cout << pair[0] << " " << pair[1] << endl;
    }
}
