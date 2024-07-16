#include <iostream>
#include <string>
#include <climits>
using namespace std;
#include "5.Tries Implement - Remove-Trie.h"

int main()
{
	Trie t;
	t.insertWord("and");
	t.insertWord("are");
	t.insertWord("dot");

	cout << t.search("and") << endl;

	t.removeWord("and");
	cout << t.search("and") << endl;
}
