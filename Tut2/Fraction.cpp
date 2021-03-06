//Function Definitions

#include "Fraction.h"

Fraction::Fraction()
{
	newf1Numerator = 0.0;
	newf1Denominator = 0.0;
	newf2Numerator = 0.0;
	newf2Denominator = 0.0;
	numerator = 0.0;
	denominator = 1.0;

}

Fraction::Fraction(double f1Numerator, double f1Denominator, double f2Numerator, double f2Denominator)
{
	newf1Numerator = f1Numerator;
	newf1Denominator = f1Denominator;
	newf2Numerator = f2Numerator;
	newf2Denominator = f2Denominator;
}

Fraction::~Fraction()
{

};

double Fraction::getf1N() const
{
	return newf1Numerator;
}

double Fraction::getf1D() const
{
	return newf1Denominator;
}

double Fraction::getf2N() const
{
	return newf2Numerator;
}

double Fraction::getf2D() const
{
	return newf2Denominator;
}

void Fraction::setf1N(double f1Numerator)
{
	newf1Numerator = f1Numerator;
}

void Fraction::setf1D(double f1Denominator)
{
	newf1Denominator = f1Denominator;
}

void Fraction::setf2N(double f2Numerator)
{
	newf2Numerator = f2Numerator;
}

void Fraction::setf2D(double f2Denominator)
{
	newf2Denominator = f2Denominator;
}

Fraction Fraction::multiply()
{
	Fraction product;
	
	product.numerator = newf1Numerator*newf2Numerator;
	product.denominator = newf1Denominator*newf2Denominator;

	return product;
	//return (newf1Numerator*newf2Numerator);
}

Fraction Fraction::divide()
{
	Fraction quotient;

	quotient.numerator = newf1Numerator*newf2Denominator;
	quotient.denominator = newf1Denominator*newf2Numerator;

	return quotient;
}

Fraction Fraction::add()
{
	Fraction sum;

	sum.numerator = (newf1Numerator*newf2Denominator)+(newf2Numerator*newf1Denominator);
	sum.denominator = newf1Denominator*newf2Denominator;

	return sum;
}

Fraction Fraction::subtract()
{
	Fraction difference;

	difference.numerator = (newf1Numerator*newf2Denominator) - (newf2Numerator*newf1Denominator);
	difference.denominator = newf1Denominator*newf2Denominator;

	return difference;
}

void Fraction::print(void)
{
	//cout << numerator << "/" << denominator << endl; 

	int n = numerator;
	int d = denominator;

	int remainder = n % d;
	int	whole = numerator / denominator;

	if (whole != 0) 
	{
		if (remainder == 0)
			cout << whole << endl;
		else
			cout << whole << "  " << remainder << "/" << denominator << endl;
	}

	else
		cout << numerator << "/" << denominator << endl;
};


