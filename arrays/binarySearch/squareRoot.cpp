#include <iostream>
using namespace std;

int squareRoot(int num)
{
    int s = 0, e = num;
    int ans = 0;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid == num / mid) // doing num/mid instead of mid * mid so that it does not exceed MAX_INT
        {
            return mid;
        }
        else if (mid > num / mid)
            e = mid - 1;
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}

double morePrecision(int temp, int precision, int num)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = ans; j < num / j; j += factor){
            ans=j;
        }
    }
    return ans;
}

int main()
{
    int num;
    cin >> num;
    int temp = squareRoot(num);
    cout << "More precise sqrt " << morePrecision(temp, 3, num);
}
