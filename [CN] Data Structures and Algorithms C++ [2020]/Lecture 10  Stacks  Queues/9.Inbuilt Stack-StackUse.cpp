#include <iostream>
using namespace std;
#include "9.Inbuilt Stack-StackUsingArray.h"
#include <stack> //TO USE STACK LIBRARY FILE

int main()
{

	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);

	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;

	cout << s.size() << endl;
	cout << s.empty() << endl;

	/*
	StackUsingArray<char> s;
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
	*/
}
