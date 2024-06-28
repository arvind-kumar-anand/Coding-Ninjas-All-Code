#include <iostream>
using namespace std;

int a; // THIS IS NOT RECOMENDED AS IT CAN BE CHANGED ANY WHERE
	   // AND IT CAN THROGH WRONG RESULT THAN WE WANT

void g()
{
	a++;
	cout << a << endl;
}

void f()
{
	cout << a << endl;
	a++;
	g();
}

int main()
{
	a = 10;
	f();
	f();
	cout << a << endl;
}
