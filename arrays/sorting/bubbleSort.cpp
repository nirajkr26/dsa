#include <iostream>
using namespace std;

int main()
{
	int n = 5;
	int arr[n] = {3, 5, 6, 2, 1};
	for (int i = 0; i < n - 1; i++)
	{
		bool flag = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				flag = true;
			}
		}
		if (!flag) // if no swaps happened then array is already sorted
			break;
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}
