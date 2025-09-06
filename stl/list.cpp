#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;

    list<int> n(5, 100);

    l.push_back(1);
    l.push_front(3);

    for (int i : l)
        cout << i << " ";

    cout << endl;

    l.erase(l.begin(), l.end());
    cout << l.size() << endl;
    
    for (int i : n)
        cout << i << " ";

    cout << endl;
}
