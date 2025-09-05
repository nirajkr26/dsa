#include <iostream>
using namespace std;

/*
allocate book pages to students
arr-10,20,30,40
students=2;
case 1)
    10|20+30+40 -> sum-10|90-max 90
case 2)
    10+20|30+40 -> sum-30|70-max 70
case 3)
    10+20+30|40 -> sum-60|40-max 60

answer would be minimum of all cases maximum,i.e 60
*/

bool isPossible(int arr[], int n, int students, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid) // current page
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > students || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int students)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i]; // finding sum of all pages for max range
    int s = 0, e = sum;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, students, mid))
        {
            ans = mid;
            e = mid - 1; // moving to left part for finding minimum
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int size = 4;
    int arr[size] = {12, 34, 67, 90, 50, 60};
    int students = 2;
    cout << allocateBooks(arr, size, students);
}
