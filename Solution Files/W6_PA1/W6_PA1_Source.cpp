//This program uses recursion to raise a number to a power.
#include <iostream>
#include <iomanip>
using namespace std;

//Function prototype
double raise(double, int);

int main()
{
	cout << "The following table demonstrates the use of a recursive function" << endl
		<< "to raise any floating-point number to an nonnegative integer" << endl
		<< "exponent." << endl << endl;

	cout << left;
	cout << setw(16) << "Double Value" << setw(16) << "Exponent" << setw(16) << "Value^Exponent" << endl;
	cout << "################################################" << endl;
	cout << setw(16) << "0" << setw(16) << "8" << setw(16) << raise(0.0, 8) << endl;
	cout << setw(16) << "1" << setw(16) << "2" << setw(16) << raise(1.0, 2) << endl;
	cout << setw(16) << "1.75" << setw(16) << "10" << setw(16) << raise(1.75, 10) << endl;
	cout << setw(16) << "2" << setw(16) << "2" << setw(16) << raise(2.0, 2) << endl;
	cout << setw(16) << "-2" << setw(16) << "2" << setw(16) << raise(-2.0, 2) << endl;
	cout << setw(16) << "2" << setw(16) << "10" << setw(16) << raise(2.0, 10) << endl;
	cout << setw(16) << "5" << setw(16) << "5" << setw(16) << raise(5.0, 5) << endl;
	cout << setw(16) << "-5" << setw(16) << "2" << setw(16) << raise(-5.0, 2) << endl;
	cout << setw(16) << "10.5" << setw(16) << "2" << setw(16) << raise(10.5, 2) << endl;
	cout << setw(16) << "16" << setw(16) << "3" << setw(16) << raise(16.0, 3) << endl << endl;

	system("pause");
	return 0;
}

//###########################################################################################
//Recursive function to raise a floating-point number to a nonnegative integer exponent.	#
//###########################################################################################
double raise(double number, int exp)
{
	//Base case, if the number has been multiplied by itself "exponent" number of times
	if (exp <= 0)
	{
		return 1;
	}

	//Otherwise, multiply the number by the same number raised to (exponent - 1) recursively, until exponent reaches 0
	else
	{
		return number * raise(number, (exp - 1));
	}
}