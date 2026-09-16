#include <iostream>
#include <string>

// Lab 3 — Hussain Zahidi
// CIS 5 Week 03 · Types & variables

int main() {
	using std::cin;
	using std::cout;
	using std::string;
	using std::endl;

	const int CURRENT_YEAR = 2026;
	string first_name = "Hussain";
	int age = 26;
	double height = 1.75; // in meters
	char first_initial = 'H';
	bool isStudent = true;

	// New variables
	int credits = 4;
	double gpa = 3.8;

	// Changed variable
	gpa = 3.75;

	cout << "The year is: " << CURRENT_YEAR << endl
		<< "Name: " << first_name << endl
		<< "Age: " << age << endl
		<< "Height: " << height << " meters" << endl
		<< "Initial: " << first_initial << endl
		<< "Student: " << isStudent << endl
		<< "Credits: " << credits << endl
		<< "GPA: " << gpa << endl
		<< endl;

	cout << "My name is " << first_name << " and I am " << age << " years old." << endl
		<< "In " << CURRENT_YEAR << ", I have " << credits << " credits and a GPA of " << gpa << "." << endl;

	// gpa was written as 3.8. I changed it to 3.75. Output paragraph reflects this change.
	// Console reads the new value because it is not a constant variable. 
	// If it were a constant variable, the program would not compile.

	// double gpa = 3.75; // Did not compile because gpa was already declared as a double variable.
	// char initials = 'HZ'; // Did not compile because char can only hold a single character.

	return 0;
}
