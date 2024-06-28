#include <iostream>
using namespace std;
// THE ABOVE 2 LINES WILL GIVE THE PERMISSION TO USE COUT IN THE CLASS AND OBJECTS

class Student
{

public:
	int rollNumber;

private:
	int age;

public:
	// Default constructor
	/*Student() {
		cout << "Constreuctor called ! "<< endl;
	}*/

	// Parameterized constructor
	Student(int rollNumber)
	{
		cout << "Constructor 2 called !" << endl;
		// rollNumber = rollNumber; //BECAUSE OF SAME NAME OF THE ARGUMENTS AND THE OBJECT PROPERTY
		this->rollNumber = rollNumber;
	}

	Student(int a, int r)
	{
		cout << "this : " << this << endl;
		cout << "Constructor 3 called ! " << endl;
		this->age = a;
		this->rollNumber = r;
	}

	void display()
	{
		cout << age << " " << rollNumber << endl;
	}

	int getAge()
	{
		return age;
	}

	void setAge(int a, int password)
	{
		if (password != 123)
		{
			return;
		}
		if (a < 0)
		{
			return;
		}
		age = a;
	}
};
