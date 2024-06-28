#include <iostream>
using namespace std;

int main()
{
	int const i = 10;
	// int *p = &i; //NOT ACCEPTABLE AS IT CAN CHANGE THE VALUE SO ALWAYS INITIALIZE IT AS CONSTANT ADDRESS
	// (*p)++; //NOT ACCEPTABLE
	int const *p = &i; // ALWAYS WRITE AS THIS VALUE
	// (*p)++; //SO THIS IS NOT ACCEPTABLE AS IT CAN CHANGE THE VALUE
	int j = 21;
	// int const *p2 = &j;
	// j++;
	// *p2++ //THIS IS NOT ACCEPTABLE
	p = &j;

	// int *const p2 = &i;
	// (*p2)++;
	// p2 = &j;

	int const *const p3 = &i;
	// p3 = &j;
	// (*p3)++;
}
