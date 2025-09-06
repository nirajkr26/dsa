#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<string> s;

	s.push("niraj");
	s.push("kumar");
	s.push("nirajkr26");

	cout << "top " << s.top() << endl;

	s.pop();

	cout << "top " << s.top() << endl;

	cout << "size of stack " << s.size() << endl;

	
}
