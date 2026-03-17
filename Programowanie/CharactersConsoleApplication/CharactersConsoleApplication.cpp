// CharactersConsoleApplication.cpp 

#include <iostream>

//Napisz program kt�ry pobierze znak od u�ytkownika i wy�wieli go.
void task1()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	std::cout << "Poda�e� znak:" << characterFromUser << "\n";
}

//Napisz program, kt�ry wczyta znak z klawiatury 
//i sprawdzi czy jest to ma�a litera alfabetu.
//ZADANIE:
//* czy jest to du�a litera alfabetu
//* czy  jest to znak cyfry
void task2()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	//if (characterFromUser >= 97 && characterFromUser <= 122)
	if (characterFromUser >= 'a' && characterFromUser <= 'z')
		std::cout << "Jest to ma�a litera alfabetu\n";
	else
		std::cout << "Nie jest to ma�a litera alfabetu\n";

	//if (characterFromUser >= 65 && characterFromUser <= 90)
	if (characterFromUser >= 'A' && characterFromUser <= 'Z')
		std::cout << "Jest to du�a litera alfabetu\n";
	else
		std::cout << "Nie jest to du�a litera alfabetu\n";
	/*
	char x;
	x = 'a';
	std::cout << x<<"\n";
	x = x + 2;
	std::cout << x << "\n";
	x = 'b' + 2;
	std::cout << x << "\n";
	*/
}

//Napisz program, kt�ry poprosi cie o twoje imi� i ci� przywita.
void task3()
{
	std::string userName;
	std::cout << "Podaj imi�:\n";
	std::cin >> userName;

	std::cout << "Witaj " << userName << " tutaj.\n";
}

//Program sprawdzaj�cy czy podane has�o jest poprawne 
//(np. je�li has�o jest "abc123", program powinien wy�wietli� "has�o poprawne", 
//je�li jest inne, powinien wy�wietli� "has�o niepoprawne").
void task4()
{
	std::string password;
	std::cout << "Podaj has�o\n";
	std::cin >> password;

	if (password == "abc123")
		std::cout << "Has�o poprawne\n";
	else
		std::cout << "Has�o niepoprawne\n";
}

//Napisz program, kt�ry wczyta �a�cuch znak�w i policzy ile jest ma�ych liter 'a'.
void task5()
{
	std::string textFromUser;
	std::cout << "Napisz jakieś zdanie: \n";
	std::cin >> textFromUser;

	int counter = 0;


	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
		{
			counter++;
		}
	}

	std::cout << "Liczba liter 'a': " << counter << "\n";

	/*
	textFromUser = "abcdgt";
	std::cout << "Pierwszy znak to "<< textFromUser[0] << "\n";
	textFromUser[1] = 'x';
	std::cout << textFromUser << "\n";
	std::cout << "Ilo�� znak�w "<< textFromUser.length() << "\n";
	*/


}
//Napisz program który wygeneruje has³o.
void task6()
{
	std::string passowrd = "";
	int passordLength;

	const int LOWER_RANGE_LENGTH = 4;
	const int UPPER_RANGE_LENGTH = 12;

	srand(time(NULL));
	passordLength = rand() % (UPPER_RANGE_LENGTH - LOWER_RANGE_LENGTH + 1) + LOWER_RANGE_LENGTH;

	for (int i = 0; i < passordLength; i++)
	{
		char character;
		character = rand() % ('z' - 'a' + 1) + 'a';

		passowrd = character + passowrd;
	}

	std::cout << "Wygenerowane has³o " << passowrd << "\n";

	passowrd = "ola";
	std::cout << passowrd[3000];
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	task6();
}