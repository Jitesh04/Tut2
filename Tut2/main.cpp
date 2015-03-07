#include <iostream>
#include <string>

#include "Fraction.h"

using namespace std;

int main()
{
	Fraction f1, f2;
	double f1Numerator;
	double f1Denominator;
	double f2Numerator;
	double f2Denominator;
	double numerator;
	double denominator;
	Fraction Product;
	Fraction Sum;
	Fraction Quotient;
	Fraction Difference;

	cout << "Enter Numerator of fraction 1: ";
	cin >> f1Numerator;

	cout << "Enter Denominator of fraction 1: ";
	cin >> f1Denominator;

	cout << "Enter Numerator of fraction 2: ";
	cin >> f2Numerator;

	cout << "Enter Denominator of fraction 2: ";
	cin >> f2Denominator;

	/*Fraction total_1(f1Numerator, f1Denominator, f2Numerator , f2Denominator); //Using overload

	cout << endl << "Numerator of fraction 1: " << total_1.getf1N() << endl <<
		"Denominator of fraction 1: " << total_1.getf1D() << endl <<
		"Numerator of fraction 2: " << total_1.getf2N() << endl <<
		"Denominator of fraction 2: " << total_1.getf2D() << endl;*/

	Fraction total_2;

	total_2.setf1N(f1Numerator);
	total_2.setf1D(f1Denominator);
	total_2.setf2N(f2Numerator);
	total_2.setf2D(f2Denominator);

	cout << endl << "Numerator of fraction 1: " << total_2.getf1N() << endl <<
		"Denominator of fraction 1: " << total_2.getf1D() << endl <<
		"Numerator of fraction 2: " << total_2.getf2N() << endl <<
		"Denominator of fraction 2: " << total_2.getf2D() << endl;

	Product = total_2.multiply();
	cout << endl << "Product: "; 
	Product.print();

	cout << endl << "Quotient: ";
	Quotient = total_2.divide();
	Quotient.print();

	cout << endl << "Sum: ";
	Sum = total_2.add();
	Sum.print();

	cout << endl << "Difference: ";
	Difference = total_2.subtract();
	Difference.print();

	return 0;
}