#include <iostream>
using namespace std;
class Fraction
{
private:
	int numerator;
	int denominator;

public:
	Fraction(int numerator, int denominator)
	{
		this->numerator = numerator;
		this->denominator = denominator;
	}

	void print()
	{
		// cout << numerator << " / " << denominator << endl; //BECAUSE THERE IS NO ARGUMENTS IN THE PRINT FUNCTION
		cout << this->numerator << " / " << this->denominator << endl;
	}

	void simplify()
	{
		int gcd = 1;
		int j = min(this->numerator, this->denominator);
		// int j = min(numerator, denominator);
		for (int i = 1; i <= j; i++)
		{
			if (this->numerator % i == 0 && this->denominator % i == 0)
			{
				gcd = i;
			}
		}
		this->numerator = this->numerator / gcd;
		this->denominator = this->denominator / gcd;
	}

	void add(Fraction f2)
	{
		int lcm = denominator * f2.denominator;
		// OR
		// int lcm = this->denominator * f2.denominator; //AS NO DENOMINATOR NAMED ARGUMENT
		int x = lcm / denominator;
		// OR
		// int x = lcm / this->denominator;
		int y = lcm / f2.denominator;

		int num = x * numerator + (y * f2.numerator);
		// OR
		// int num = x * this->numerator + (y * f2.numerator);

		numerator = num;
		denominator = lcm;
		// OR
		//  this->numerator = num;
		// this->denominator = lcm;

		simplify();
	}
};
