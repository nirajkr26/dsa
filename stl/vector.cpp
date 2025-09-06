#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(5, 1); // creates 5 size vector with all values 1

    vector<int> b(a); // copies vector a into b

    cout << "Size-" << v.capacity() << endl;

    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    cout << "Empty or not-" << v.empty() << endl;
    cout << "first element- " << v.front() << endl;
    cout << "last element- " << v.back() << endl;
    v.clear(); // empties size but capacity remains intact
}

// https://whimsical.com/c-stl-XVxuHHof5GTWA4NXZhXQhx