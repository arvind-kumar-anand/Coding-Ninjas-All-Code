#include <iostream>
using namespace std;
#include "5.Stack Using Templates-StackUsingArray.cpp"

int main()
{
	StackUsingArray<int> s;
	// StackUsingArray<char> s; //ASCII VALUE WILL BE RETURNED
	s.push(100);
	s.push(101);
	s.push(102);
	s.push(103);
	s.push(104);

	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.size() << endl;

	cout << s.isEmpty() << endl;
}
