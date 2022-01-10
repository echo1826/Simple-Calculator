#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	Calculator calc;
	char option;
	double numberOne;
	double numberTwo;

	char check = 'y';
	
	while (check == 'y' || check == 'Y')
	{
		cout << "Please enter the numbers you want to use.\nFirst number: ";
		cin >> numberOne;
		cout << "Second number: ";
		cin >> numberTwo;

		cout << "Please enter the corresponding symbol for mode.\n";
		cout << "+ for addition\t- for subtraction\t* for multiplication\t/ for division: ";
		cin >> option;
		switch (option)
		{
		case '+': cout << calc.add(numberOne, numberTwo) << endl;
				  break;
		case '-': cout << calc.minus(numberOne, numberTwo) << endl;
				  break;
		case '*': cout << calc.multiply(numberOne, numberTwo) << endl;
				  break;
		case '/': cout << calc.divide(numberOne, numberTwo) << endl;
				  break;
		}
		
		cout << "\nContinue operations? (Enter y or Y)\n";
		cin >> check;
	}
	return 0;
}

