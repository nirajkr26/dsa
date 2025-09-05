#include <bits/stdc++.h>
using namespace std;

// assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

bool isPossible(int arr[], int size, int cows, int mid)
{
	int cowCount = 1, lastStall = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] - lastStall >= mid)// checking distance between two stalls
		{
			cowCount++;
			lastStall = arr[i];
		}
		if (cowCount == cows) 
			return true;
	}
	return false;
}

int aggressiveCows(int arr[], int size, int cows)
{
	int s = 1, e = arr[size - 1] - arr[0]; // start is 1 because minimum distance is 1,and end is difference of max and min element
	int ans = 1;
	while (s <= e)
	{
		int mid = s + (e - s) / 2;
		if (isPossible(arr, size, cows, mid))
		{
			ans = mid;
			s = mid + 1;//moving to right part for finding maximum 
		}
		else
		{
			e = mid - 1;
		}
	}
	return ans;
}

int main()
{
	int size = 5;
	int arr[size] = {4, 2, 1, 3, 6};
	int cows = 2;
	sort(arr, arr + size);
	cout << aggressiveCows(arr, size, cows);
}