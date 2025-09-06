#include <iostream>
#include <array>

using namespace std;

int main()
{
    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();

    cout << "element at 2nd index- " << a.at(2) << endl;

    cout << "Empty or not-" << a.empty() << endl;
    cout << "first element- " << a.front() << endl;
    cout << "last element- " << a.back() << endl;
}

// https://whimsical.com/c-stl-XVxuHHof5GTWA4NXZhXQhx