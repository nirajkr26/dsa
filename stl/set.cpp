#include <iostream>
#include <set>

using namespace std;

int main()
{
	// set(sorted) is slower than unordered_set(random)

	set<int> s;

	s.insert(5);
	s.insert(5);
	s.insert(5);
	s.insert(1); // O(logn)
	s.insert(0);
	s.insert(0);
	s.insert(6);

	for (auto i : s)
	{
		cout << i << " ";
	}
	cout << endl;

	cout << "5 is present or not->" << s.count(5) << endl;
	cout << "-5 is present or not->" << s.count(-5) << endl;

	set<int>::iterator itr = s.find(1);

	for (auto it = itr; it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
