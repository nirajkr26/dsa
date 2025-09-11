#include <bits/stdc++.h>
using namespace std;

void sumTwoArray(int arr1[], int m, int arr2[], int n)
{
	int i = m - 1;
	int j = n - 1;
	int carry = 0;
	vector<int> v;

	while (i >= 0 && j >= 0)
	{
		int val1 = arr1[i];
		int val2 = arr2[j];
		int sum = val1 + val2 + carry;
		carry = sum / 10;
		v.push_back(sum % 10);
		i--;
		j--;
	}

	while (i >= 0)
	{
		int val1 = arr1[i];
		int sum = val1 + carry;
		carry = sum / 10;
		v.push_back(sum % 10);
		i--;
	}

	while (j >= 0)
	{
		int val2 = arr2[j];
		int sum = val2 + carry;
		carry = sum / 10;
		v.push_back(sum % 10);
		j--;
	}

	if (carry > 0)
		v.push_back(carry);

	reverse(v.begin(), v.end());

	for (auto ele : v)
		cout << ele << " ";
}

int main()
{
	int arr1[4] = {1, 2, 3, 4};
	int arr2[4] = {2, 5, 7, 9};
	sumTwoArray(arr1, 4, arr2, 4);
	return 0;
}
