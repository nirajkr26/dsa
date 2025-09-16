#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    int ans = power(a, b / 2);
    // if (b & 1) // odd
    // return a * ans * ans;
    // else
    // return ans * ans;
    
    return ans * ans * ((b & 1) ? a : 1);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << power(a, b);
}