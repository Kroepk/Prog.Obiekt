#include <iostream>




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
//Program obliczający pole koła
void task5()
{
	float r;
	std::cout << "======[Pole koła]======\n";
	std::cout << " Podaj promien= ";
	std::cin >> r;
	std::cout << "Pole kola= " << 3.14 * r * r << std::endl;
}
//Program obliczający wartość wyrażenia a^2 + b^2
void task6()
{
	float a, b;
	std::cout << "Podaj liczbe a ktora będzie pomnozona przez kwadrat: ";
	std::cin >> a;
	std::cout << "Podaj liczbe b ktora bedzie pomnozona przez kwadrat: ";
	std::cin >> b;
	std::cout << "Wynik dodawania a i b gdzie oby dwie liczby sa pomnozone przez kwadrat:" << a * a + b * b << std::endl;
}
//Program obliczający pole trójkąta o podstawie b i wysokości h
void task7()
{
	float b, h;
	std::cout << "Podaj podstawę: ";
	std::cin >> b;
	std::cout << "Podaj wysokość: ";
	std::cin >> h;
	std::cout << "Pole trójkąta wynosi: " << (b * h) / 2 << std::endl;
}
//Program obliczający objętość kuli o promieniu r
void task8()
{
	float r;
	std::cout << "Podaj promień: ";
	std::cin >> r;
	std::cout << "Objętość kuli o promieniu r wynosi:" << (4.0 / 3.0) * 3.14 * r * r * r << std::endl;
}
//Program obliczający pole trapezu o podstawach a i b oraz wysokości h
void task9()
{
	float a, b, h;
	std::cout << "Podaj długość podstawy a: ";
	std::cin >> a;
	std::cout << "Podaj długość podstawy b: ";
	std::cin >> b;
	std::cout << "Podaj wysokość: ";
	std::cin >> h;
	std::cout << "Pole trapezu wynosi: " << (a + b) * h / 2 << std::endl;
}
//Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task10()
{
	double x1, x2, x3;
	double w1, w2, w3;

	std::cout << "Podaj pierwsza liczbe: ";
	std::cin >> x1;
	std::cout << "Podaj wage pierwszej liczby: ";
	std::cin >> w1;

	std::cout << "Podaj drugą liczbe: ";
	std::cin >> x2;
	std::cout << "Podaj wage drugiej liczby: ";
	std::cin >> w2;

	std::cout << "Podaj trzecią liczbe: ";
	std::cin >> x3;
	std::cout << "Podaj wage trzeciej liczby: ";
	std::cin >> w3;

	std::cout << "Waga podanych licz wynosi: " << (x1 * w1 + x2 * w2 + x3 * w3) / (w1 + w2 + w3) << std::endl;
}
//Stwórz program, który pobiera od użytkownika długość w metrach i przelicza ją na centymetry i milimetry, wyświetlając wynik.
void task11()
{
	float metry;
	std::cout << "Podaj, ilość metrów:";
	std::cin >> metry;
	std::cout << " Zmiana metrów na centymetry: " << metry * 100 << " Zmiana metrów na milimetry: " << metry * 1000 << std::endl;
}
// Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.
void task12()
{
	float pln;

	std::cout << "Podaj ile pieniędzy masz w pln: ";
	std::cin >> pln;
	std::cout << "Cena za 1 euro wynosi 4,26 pln " << std::endl;

	std::cout << " Podana kwota w euro wynosi: " << pln / 4.26 << std::endl;
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	task12();
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