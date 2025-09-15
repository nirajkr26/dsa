#include <iostream>
using namespace std;

// count distinct ways to climb stairs
int climbStairs(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0; // Invalid step

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{
    int n;
    cin >> n;

    int ways = climbStairs(n);
    cout << "Number of distinct ways to climb " << n << " stairs: " << ways << endl;

    return 0;
}