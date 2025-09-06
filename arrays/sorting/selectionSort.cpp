#include <bits/stdc++.h>
using namespace std;

/*
select the minimum and keep swapping
*/

int main()
{
	int size = 5;
	int arr[size] = {3, 2, 6, 5, 7};
	for (int i = 0; i < size - 1; i++)
	{
		int minIdx = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[minIdx] > arr[j])
			{
				minIdx = j;
			}
		}
		if (minIdx != i)
			swap(arr[minIdx], arr[i]);
	}
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}
