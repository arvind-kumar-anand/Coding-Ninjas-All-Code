#include <iostream>
using namespace std;
#include "5.Constant Functions-Fraction.cpp"

int main()
{
	Fraction f1(10, 2);
	Fraction f2(15, 4);

	Fraction const f3;

	cout << f3.getNumerator() << " " << f3.getDenominator() << endl;
	// getNumerator IS CONSTANT FUNCTION SPECIFIED ALREADU IN THE CLASS SEE
	//  f3.setNumerator(10); //NOT ALLOWED
}
