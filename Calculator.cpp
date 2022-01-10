#include <iostream>
#include "Calculator.h"

using namespace std;

double Calculator::add(double numberOne, double numberTwo)
{
	return numberOne + numberTwo;
}

double Calculator::minus(double numberOne, double numberTwo)
{
	return numberOne - numberTwo;
}

double Calculator::multiply(double numberOne, double numberTwo)
{
	return numberOne * numberTwo;
}

double Calculator::divide(double numberOne, double numberTwo)
{
	if (numberTwo == 0)
	{
		cout << "Can't divide by 0";
	}
	else
	{
		return numberOne / numberTwo;
	}
}