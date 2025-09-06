#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, string> m;

	m[1] = "niraj";
	m[2] = "kumar";
	m[26] = "nirajkr26";

	m.insert({5, "pogo"});

	for (auto i : m)
	{
		cout << i.first << " " << i.second << endl;
	}

	cout << "finding 5-" << m.count(5) << endl;

	m.erase(2);

	for (auto i : m)
	{
		cout << i.first << " " << i.second << endl;
	}

	auto it = m.find(5);

	cout << endl
		 << "iterator" << endl;
	for (auto i = it; i != m.end(); i++)
	{
		cout << (*i).first << " " << (*i).second << endl;
	}
}

//for using iterator ,it needs to be dereferenced