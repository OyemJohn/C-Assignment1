#include <iostream>

int main ()
{
	int number1;
	
	std:: cout << "Enter Integer : ";
	std:: cin >> number1;
	
	int number2 = number1 / 2;
	
	if (number1 % 2 == 0)
	std:: cout << " It Is An Even Number";
	
	else
	std:: cout << " It Is An Odd Number";
	return 0;
}
