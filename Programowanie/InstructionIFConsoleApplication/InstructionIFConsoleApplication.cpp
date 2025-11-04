#include <iostream>

/*

DRY - don't repeat yourself
KISS - kept it simple stiupid

Operatry warunkowe:
>		- wiêkszy
<		- mniejszy
>=		- wiekszy b¹dŸ równy
<=		- mniejszy b¹dŸ równy
==		- równy
!=		- ró¿ny

Operatory logiczne:
&&	-	AND
||	-	OR
!	-   NOT

a	b		a && b		a || b		!a
F	F		  F			   F		 T
F	T		  F			   T		 T
T	F		  F			   T		 F
T	T	      T			   T		 F

a && b || c && d

*/

/*
*. Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
*. Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
*. Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.



*/

//Napisz program, który wyœwietli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczbê ca³kowit¹:\n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Podana liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "Podana liczba jest ujemna\n";

	if (number == 0)
		std::cout << "Podana liczba nie jest dodatnia ani ujemna\n";

	std::cout << "Koniec programu\n";
}

//Napisz program, który wyœwietli informacje czy liczba jest parzysta czy nieparzysta.
void task2()
{
	int number;
	std::cout << "Podaj liczbê ca³kowit¹:\n";
	std::cin >> number;

	int reminderOfDivision;
	reminderOfDivision = number % 2;

	if (reminderOfDivision == 0)
		std::cout << "Podana liczba jest parzysta\n";

	if (reminderOfDivision == 0) // == 1 
		std::cout << "Podana liczba jest nieparzysta\n";

	//--------------------------------------------------------
	if (reminderOfDivision == 0)
		std::cout << "Podana liczba jest parzysta\n";
	else
		std::cout << "Podana liczba jest nieparzysta\n";
}

//Napisz program, który wyœwietli informacje czy liczba jest z zakresu <1 ; 10).
void task3()
{
	int number;
	std::cout << "Podaj liczbê ca³kowit¹:\n";
	std::cin >> number;

	//wersja 1
	if (number >= 1)
	{
		if (number < 10)
			std::cout << "Liczba jest w zakresie <1;10)\n";
		else
			std::cout << "Liczba nie jest w zakresie <1;10)\n";
	}
	else
	{
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	}

	//wersja 2
	if (number >= 1)
		if (number < 10)
			std::cout << "Liczba jest w zakresie <1;10)\n";
		else
			std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba nie jest w zakresie <1;10)\n";

	//wersja 3
	if (number >= 1 && number < 10)
		std::cout << "Liczba jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba nie jest w zakresie <1;10)\n";

	//wersja 4
	if (number < 1 || number >= 10)
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba jest w zakresie <1;10)\n";

	//wersja 5
	if (!(number >= 1 && number < 10))
		std::cout << "Liczba nie jest w zakresie <1;10)\n";
	else
		std::cout << "Liczba jest w zakresie <1;10)\n";


}

//Napisz program, który wykona dzielenie dwóch liczb
void task4()
{
	int dividend, divisor;
	std::cout << "Podaj dzielnik:\n";
	std::cin >> dividend;
	std::cout << "Podaj dzieln¹:\n";
	std::cin >> divisor;

	if (divisor != 0)
	{
		int quoitent = dividend / divisor;
		std::cout << "Wynik dzielenia " << quoitent << "\n";
	}
	else
		std::cout << "Dzzielenie przez zero!!!\n";
}
//Napisz program, który poprosi u¿ytkownika o podanie dwóch liczb ca³kowitych i sprawdzi, czy s¹ one równe. Wyœwietl odpowiedni komunikat.
void task5()
{
	int liczba1, liczba2;

	std::cout << "Podaj pierwsz¹ liczbê ca³kowit¹: ";
	std::cin >> liczba1;
	std::cout << "Podaj drug¹ liczbê ca³kowit¹: ";
	std::cin >> liczba2;

	if (liczba1 == liczba2) {
		std::cout << "Podane liczby s¹ równe ";
	}
	else {
		std::cout << "Podane liczby nie s¹ równe ";
	}
}
//Napisz program, który poprosi u¿ytkownika o podanie wieku i sprawdzi, czy osoba jest pe³noletnia. Wyœwietl odpowiedni komunikat.
void task6() {

	int wiek;

	std::cout << "Podaj swój wiek:";



	std::cin >> wiek;

	if (wiek > 18) {
		std::cout << "Jesteœ pe³noletni";
	}
	else {
		std::cout << "Nie jesteœ pe³noletni!!";
	}
}
//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i obliczy jej wartoœæ bezwzglêdn¹. Wyœwietl wynik.
void task7() {

	int liczba;

	std::cout << "Podaj liczbê ca³kowit¹: ";
	std::cin >> liczba;


	if (liczba < 0) {
		liczba = -liczba;
	}
	std::cout << "Wartoœæ bezwzglêdna podanej liczby wynosi: " << liczba;

}
//Napisz program, który poprosi u¿ytkownika o podanie roku i sprawdzi, czy jest to rok przestêpny. Wyœwietl odpowiedni komunikat.
void task8() {

	int rok;

	std::cout << "Podaj rok do sprawdzenia czy jest przestêpny: ";
	std::cin >> rok;

	if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) {

		std::cout << "Podany rok jest przestêpny";
	}
	else {
		std::cout << "Podany rok nie jest przestêpny";
	}
}

//Napisz program, który poprosi u¿ytkownika o podanie liczby ca³kowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyœwietl odpowiedni komunikat.
void task9()
{
	int liczba;

	std::cout << "Podaj liczbê ca³kowit¹ do sprawdzenia czy jest podzielna przez 3 i przez 5: ";
	std::cin >> liczba;

	if (liczba % 3 == 0 && liczba % 5 == 0) {
		std::cout << "Podana liczba jest podzielna zarówno przez 3, jak i przez 5.";
	}
	else {
		std::cout << "Podana liczba nie jest podzielna zarówno przez 3, jak i przez 5.";
	}





}


int main()
{
	setlocale(LC_CTYPE, "polish");

	task9();
}