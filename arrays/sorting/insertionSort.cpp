#include <iostream>
using namespace std;

int main()
{
	int n = 5;
	int arr[n] = {6, 2, 4, 1, 7};

	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;
		/*
		for (j; j >= 0; j--)
		{
			if (arr[j] > key)
			{
				arr[j + 1] = arr[j];
			}
			else
			{
				break;
			}
		}
		*/
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}
