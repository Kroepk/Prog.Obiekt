#include <iostream>

/*
*.
*. Program obliczający objętość stożka.
*. Program obliczający pole koła.
*. Program obliczający wartość wyrażenia a^2 + b^2
*. Program obliczający pole trójkąta o podstawie b i wysokości h
*. Program obliczający objętość kuli o promieniu r
*. Program obliczający pole trapezu o podstawach a i b oraz wysokości h
*. Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stwórz program, który pobiera od użytkownika długość w metrach i przelicza ją na centymetry i milimetry, wyświetlając wynik.
*. Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.
*/

//Napisz program który wczyta liczbę od użytkownika i ją wyświetli na konsoli
void task1()
{
	//wczytanie liczby
		//deklaracja zmiennych          1
		//pobranie liczby
			//informacja co chcemy      2
			//oczekiwanie na liczbę     3
	//wyświetlenie na konsoli           4

	//1
	int numberFromUser; //number_from_user
	//2
	std::cout << "Podaj liczbę całkowitą:\n";
	//3
	std::cin >> numberFromUser;
	//4
	std::cout << "Podałeś " << numberFromUser << "\n";
}

//Program obliczający średnią arytmetyczną dwóch liczb.
void task2()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwszą liczbę:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj drugą liczbę:\n";
	std::cin >> secondNumber;

	int avg;

	avg = (firstNumber + secondNumber) / 2;

	std::cout << "Wynik średniej: " << avg << "\n";
}
//Program obliczające pole pole prostokąta
void task3()
{
	int sideA, sideB;
	std::cout << "Aby obliczyć pole prostokąta podaj bok A:\n";
	std::cin >> sideA;

	std::cout << "Aby obliczyć pole prostokąta podaj bok B:\n";
	std::cin >> sideB;

	int area;

	area = (sideA * sideB);

	std::cout << "Pole prostokąta wynosi" << area << "\n";
}


//Program obliczający pole stożka.
void task4()
{
	float r, h;
	std::cout << "======[Objetosc stozka]======\n";
	std::cout << " Podaj promień= ";
	std::cin >> r;
	std::cout << "Podaj wysokosc stozka= ";
	std::cin >> h;
	std::cout << "Objetosc stozka= " << (1.0f / 3.0f) * 3.14 * r * r * h << std::endl;
}
////Program obliczający pole koła
//void task4()
//{
//	float p, h;
//	std::cout << "======[Pole koła]======\n";
//	std::cout << " Podaj promien= ";
//	std::cin >> p;
//	std::cout << "Podaj srednicę= ";
//	std::cin >> h;
//	std::cout << "Pole kola= " <<p * h << std::endl;
//}


int main()
{
	task4();
}


/*

Zmienna - pewien obszar w pamięci operacyjnej, w której można
w danej chwili przechować tylko jedną daną.

Instrukcja daklaracji zmiennej:
typ_zmienej nazwaZmiennej;

Typ zmiennej - wielkość obszaru pamięci, interpretacja ciągu bitów

int - 2 bajtowa lub 4 bajtowa liczba całkowita ze znakiem
short - 2 bajtowa liczba całkowita ze znakiem <-32 768, 32 767>
long - 4 bajtowa liczba całkowita ze znakiem <-2 147 483 648, 2 147 483 647>
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned - zmienna bez znaku <0, 2*max + 1>

float - 4 bajtowa liczba rzeczywista, dokładność 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dokładność 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dokładność 19-20 cyfr po przecinku

Nazwa zmiennej - nazwa obszaru w pamięci, identyfikator
Warunki niezbędne:
* dozwolone znaki:
	- alfabet angielski aA-zZ
	- cyfry arabskie 0-9
	- podkreślenie (podłoga) _
* pierwszym znakiem nie może być cyfra
* unikalny w swoim zakresie widoczności
* nie może to być słowo kluczowe (zarezerwowane) danego języka

Warunki programistów:
* nazwa zmiennej powinna oddawać charakter przechowywanych danych
* jeśli wiele słów to w miejscu spacji podkreślenie lub zaczynając od drugiego
  słowa piszemy je z dużej litery
* piszemy po angielsku
*/