#include <iostream>

int main ()
{
	int number1;
	int number2;
	int number3;
	
	std:: cout << "ENTER FIRST INTEGER:";
	std:: cin >> number1;
	
	std:: cout << "ENTER SECOND INTEGER:";
	std:: cin >> number2;
	
	number3 = number1 / number2;
	if (number1 % number2 == 0)
	std:: cout << number1 << " is a multiple of " << number2;
	
	else
	std:: cout << number1 << " is not a multiple of " << number2;
	return 0;
}
