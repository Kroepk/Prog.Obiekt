#include <iostream>

//Napisz program, kt�ry wy�wietli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczb� ca�kowit�:\n";
	std::cin >> number;

	int reminderOfDivision;
	reminderOfDivision = number % 2;

	if (reminderOfDivision > 0)
		std::cout << "Podana liczba jest parzysta\n";
	
	if (reminderOfDivision < 0)
		std::cout << "Podana liczba jest nie parzysta\n";




	std::cout << "Koniec programu\n";
}


int main()
{
	setlocale(LC_CTYPE, "polish");

	task1();
}