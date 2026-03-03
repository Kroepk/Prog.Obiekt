// LoopForConsoleApplication.cpp 
#include <iostream>

/*
* Program wy�wietlaj�cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100

* Napisz program, kt�ry wypisze liczby od 10 do 1 w odwrotnej kolejno�ci.

* Napisz program, kt�ry obliczy iloczyn liczb od 1 do podanej przez u�ytkownika.

* Napisz program, kt�ry wypisze w kolejnych liniach rosn�c� liczb� cyfr, np.:
1
12
123
1234

*/

//Napisz program, kt�ry wy�wietli "Hello world" 
// tyle razy ile chce u�ytkownik
void task1()
{
	int howManyTimes;
	std::cout << "Podaj ile razy wy�wietli�\n";
	std::cin >> howManyTimes;

	for (int i = 0; i < howManyTimes; i++)
	{
		std::cout << "Hello world\n";
	}
}

//Napisz program, kt�ry wy�wietli liczby
// parzyste do podanej przez u�ytkownika liczby
void task2()
{
	int upperRange;
	std::cout << "Podaj g�rn� granic� do wy�wietlenia\n";
	std::cin >> upperRange;

	for (int i = 0; i <= upperRange; i += 2)
	{
		std::cout << i << "\n";
	}
}

//Program obliczaj�cy sum� liczb od 1 do 100
void task3()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		//std::cout << i << "\n";
		sum = sum + i;
	}
	std::cout << "Suma: " << sum << "\n";
}
//Program wy�wietlaj�cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task4()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			std::cout << i << "\n";
		}
	}
}
//Napisz program, kt�ry wypisze liczby od 10 do 1 w odwrotnej kolejno�ci.
void task5()
{
	for (int i = 10; i >= 1; i--)
	{
		std::cout << i << "\n";
	}
}
//Napisz program, kt�ry obliczy iloczyn liczb od 1 do podanej przez u�ytkownika.
void task6()
{
	int n;
	long long iloczyn = 1;

	std::cout << "Podaj liczbe: ";
	std::cin >> n;

	if (n < 1)
	{
		std::cout << "Blad: liczba musi byc wieksza od 0!\n";
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			iloczyn = iloczyn * i;
		}
		std::cout << "Iloczyn wynosi: " << iloczyn << "\n";
	}
}
//Napisz program, kt�ry wypisze w kolejnych liniach rosn�c� liczb� cyfr, np.:
//1
//12
//123
//1234
void task7()
{
	int n;
	std::cout << "Podaj ile linii wyswietlic: ";
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << j;
		}
		std::cout << "\n";
	}
}
int main()
{
	task7();
}