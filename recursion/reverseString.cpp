#include <iostream>
using namespace std;

void reverseString(string &str, int i, int j)
{
    if (i > j)
        return;

    swap(str[i++], str[j--]);
    
    reverseString(str, i, j);
}

int main()
{
    string name = "niraj";
    reverseString(name, 0, name.size() - 1);

    cout << name;
}