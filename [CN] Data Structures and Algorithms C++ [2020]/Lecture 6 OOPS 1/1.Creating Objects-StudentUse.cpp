#include <iostream>
using namespace std;
#include "1.Creating Objects-Student.cpp"
// INCLUDING THE OBJECT CREATED FILE AND ALL CODE WRITTEN WILL WORK HERE ALSO

int main()
{
	// Create objects statically
	Student s1;
	Student s2;

	Student s3, s4, s5;

	s1.age = 24;
	s1.rollNumber = 101;

	cout << s1.age << endl;
	cout << s1.rollNumber << endl;

	s2.age = 30;

	// Create objects dynamicaaly
	Student *s6 = new Student;
	(*s6).age = 23;
	(*s6).rollNumber = 104;

	s6->age = 23;
	s6->rollNumber = 104;
}
