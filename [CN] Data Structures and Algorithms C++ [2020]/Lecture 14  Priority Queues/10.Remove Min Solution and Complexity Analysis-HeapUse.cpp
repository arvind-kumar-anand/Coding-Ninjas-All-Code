#include <iostream>
using namespace std;
#include "10.Remove Min Solution and Complexity Analysis-PriorityQueue.h"

int main() {
	PriorityQueue p;

	p.insert(100);
	p.insert(10);
	p.insert(15);
	p.insert(4);
	p.insert(17);
	p.insert(21);
	p.insert(67);

	cout << p.getSize() << endl;
	cout << p.getMin() << endl;

	while(!p.isEmpty()) {
		cout << p.removeMin() << " " ;

	}
	cout << endl;
}
