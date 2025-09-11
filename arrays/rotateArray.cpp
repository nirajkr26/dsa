#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k)
{
	int temp[n];
	for (int i = 0; i < n; i++)
		temp[(i + k) % n] = arr[i];

	for (int i = 0; i < n; i++)
		arr[i] = temp[i];
}

int main()
{
	int n = 5;
	int arr[n] = {1, 2, 3, 4, 5};
	int k = 3;

	rotateArray(arr, n, k % n);

	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
}
