#include <iostream>
using namespace std;
#include "1.What is Linked List-Node.cpp"

int main()
{
	// Statically
	Node n1(1);
	Node *head = &n1;

	Node n2(2);

	n1.next = &n2;

	cout << n1.data << " " << n2.data << endl;
}
