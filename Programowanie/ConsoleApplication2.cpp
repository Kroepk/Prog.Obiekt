#include <iostream>
#include <string>
void kolo();
void kwadrat();
void prostokat();
void trojkat();
void trapez();
void romb();
int main()
{
	std::string imie;
	int wybor;

	std::cout << "Podaj imie: ";
	std::cin >> imie;

	std::cout << "Witaj " << imie << std::endl;

	std::cout << "1. Kolo\n";
	std::cout << "2. Trojkat\n";
	std::cout << "3. Kwadrat\n";
	std::cout << "4. Prostokat\n";
	std::cout << "5. Trapez\n";
	std::cout << "6. Romb\n";
	std::cout << "Wybierz figure: ";
	std::cin >> wybor;

	switch (wybor)
	{
	case 1: kolo(); break;
	case 2: trojkat(); break;
	case 3: kwadrat(); break;
	case 4: prostokat(); break;
	case 5: trapez(); break;
	case 6: romb(); break;
	default: std::cout << "Zly wybor!";
	}

	return 0;
}

void kolo()
{
	float kolo;
	std::cout << "Podaj promien: ";
	std::cin >> kolo;

	if (kolo <= 0)
	{
		std::cout << "Bledna wartosc!";
		return;
	}

	std::cout << "Pole: " << 3.14 * kolo * kolo << std::endl;
	std::cout << "Obwod: " << 2 * 3.14 * kolo << std::endl;
}

void kwadrat()
{
	float kwadrat;
	std::cout << "Podaj bok: ";
	std::cin >> kwadrat;

	if (kwadrat <= 0)
	{
		std::cout << "Bledna wartosc!";
		return;
	}

	std::cout << "Pole: " << kwadrat * kwadrat << std::endl;
	std::cout << "Obwod: " << 4 * kwadrat << std::endl;
}

void prostokat()
{
	float prostokata, prostokatb;
	std::cout << "Podaj bok a: ";
	std::cin >> prostokata;
	std::cout << "Podaj bok b: ";
	std::cin >> prostokatb;

	if (prostokata <= 0 || prostokatb <= 0)
	{
		std::cout << "Bledne wartosci!";
		return;
	}

	std::cout << "Pole: " << prostokata * prostokatb << std::endl;
	std::cout << "Obwod: " << 2 * (prostokata + prostokatb) << std::endl;
}

void trojkat()
{
	float trojkata, trojkath;
	std::cout << "Podaj bok: ";
	std::cin >> trojkata;
	std::cout << "Podaj wysokosc: ";
	std::cin >> trojkath;

	if (trojkata <= 0 || trojkath <= 0)
	{
		std::cout << "Bledne wartosci!";
		return;
	}

	std::cout << "Pole: " << (trojkata * trojkath) / 2 << std::endl;
	std::cout << "Obwod: " << 3 * trojkata << std::endl;
}


void trapez()
{
	float trapeza, trapezb, trapezh, ramie;
	std::cout << "Podaj podstawe a: ";
	std::cin >> trapeza;
	std::cout << "Podaj podstawe b: ";
	std::cin >> trapezb;
	std::cout << "Podaj wysokosc: ";
	std::cin >> trapezh;
	std::cout << "Podaj ramie: ";
	std::cin >> ramie;

	if (trapeza <= 0 || trapezb <= 0 || trapezh <= 0 || ramie <= 0)
	{
		std::cout << "Bledne wartosci!";
		return;
	}

	std::cout << "Pole: " << (trapeza + trapezb) * trapezh << std::endl;
	std::cout << "Obwod: " << trapeza + trapezb + 2 * ramie << std::endl;
}

void romb()
{
	float romba, rombh;
	std::cout << "Podaj bok: ";
	std::cin >> romba;
	std::cout << "Podaj wysokosc: ";
	std::cin >> rombh;

	if (romba <= 0 || rombh <= 0)
	{
		std::cout << "Bledne wartosci!";
		return;
	}

	std::cout << "Pole: " << romba * rombh << std::endl;
	std::cout << "Obwod: " << 4 * romba << std::endl;
}


