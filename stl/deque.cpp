#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "front " << d.front() << endl;
    cout << "back " << d.back() << endl;

    d.erase(d.begin(), d.begin() + 1);

    // after erase size becomes zero but max_size remains intact from start to end
    cout << d.size() << endl;

    cout << "empty or not " << d.empty() << endl;

    d.pop_back();

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}