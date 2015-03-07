//Header ==> Funtion Declarations

#include <iostream>
#include <string>

using namespace std;

#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
public:
	//Default Constructor
	Fraction();

	//Overload Constructor
	Fraction(double, double, double, double);

	//Destructor
	~Fraction();

	//Accessor Functions
	double getf1N() const; //returns numerator of fraction 1
	double getf1D() const; //returns denominator of fraction 1
	double getf2N() const; //returns numerator of fraction 2
	double getf2D() const; //returns denominator of fraction 2

	//Mutator Functions
	void setf1N(double); //sets value of numerator of fraction 1
	void setf1D(double); //sets value of denominator of fraction 1
	void setf2N(double); //sets value of numerator of fraction 2
	void setf2D(double); //sets value of denominator of fraction 2

	Fraction multiply(); //calculate product of 2 fractions
	Fraction divide();
	Fraction add();
	Fraction subtract();

	void print();

private:
	//Member Variables
	double newf1Numerator;
	double newf1Denominator;
	double newf2Numerator;
	double newf2Denominator;
	double numerator;
	double denominator;

};

#endif

