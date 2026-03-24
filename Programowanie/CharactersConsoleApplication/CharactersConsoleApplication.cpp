// CharactersConsoleApplication.cpp 

#include <iostream>
#include <string>
#include <algorithm>

/*
* Wczytaj s³owo i wypisz pierwsz¹ oraz ostatni¹ literê.
* U¿ytkownik podaje tekst, a program zamienia wszystkie litery na wielkie.
* Napisz program, który wypisuje tekst od koñca.
* Zamieñ wszystkie cyfry na znak „*”. Przyk³ad: „abc123” ? „abc***”.
* Napisz program, który bêdzie prosi³ o has³o. Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
* Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
*
*
* Program wyci¹gaj¹cy informacje z numeru PESEL
* Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym. Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.

*/

//Napisz program który pobierze znak od u¿ytkownika i wyœwieli go.
void task1()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	std::cout << "Poda³eœ znak:" << characterFromUser << "\n";
}

//Napisz program, który wczyta znak z klawiatury 
//i sprawdzi czy jest to ma³a litera alfabetu.
//ZADANIE:
//* czy jest to du¿a litera alfabetu
//* czy  jest to znak cyfry
void task2()
{
	char characterFromUser;
	std::cout << "Podaj znak\n";
	std::cin >> characterFromUser;

	//if (characterFromUser >= 97 && characterFromUser <= 122)
	if (characterFromUser >= 'a' && characterFromUser <= 'z')
		std::cout << "Jest to ma³a litera alfabetu\n";
	else
		std::cout << "Nie jest to ma³a litera alfabetu\n";

	//if (characterFromUser >= 65 && characterFromUser <= 90)
	if (characterFromUser >= 'A' && characterFromUser <= 'Z')
		std::cout << "Jest to du¿a litera alfabetu\n";
	else
		std::cout << "Nie jest to du¿a litera alfabetu\n";
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

//Napisz program, który poprosi cie o twoje imiê i ciê przywita.
void task3()
{
	std::string userName;
	std::cout << "Podaj imiê:\n";
	std::cin >> userName;

	std::cout << "Witaj " << userName << " tutaj.\n";
}

//Program sprawdzaj¹cy czy podane has³o jest poprawne 
//(np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", 
//jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
void task4()
{
	std::string password;
	std::cout << "Podaj has³o\n";
	std::cin >> password;

	if (password == "abc123")
		std::cout << "Has³o poprawne\n";
	else
		std::cout << "Has³o niepoprawne\n";
}

//Napisz program, który wczyta ³añcuch znaków i policzy ile jest ma³ych liter 'a'.
void task5()
{
	std::string textFromUser;
	std::cout << "Podaj ³añcuch znaków\n";
	std::cin >> textFromUser;

	/*
	textFromUser = "abyrcdgt";
	std::cout << "Pierwszy znak to "<< textFromUser[0] << "\n";
	textFromUser[1] = 'x';
	std::cout << textFromUser << "\n";
	std::cout << "Iloœæ znaków "<< textFromUser.length() << "\n";
	*/

	int counter = 0;
	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			counter++;
	}

	std::cout << "Ma³ych liter 'a' jest " << counter << "\n";
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
//Wczytaj s³owo i wypisz pierwsz¹ oraz ostatni¹ literê.
void task7() {
	std::string word;
	std::cout << "Podaj slowo: ";
	std::cin >> word;

	std::cout << "Pierwsza: " << word[0] << "\n";
	std::cout << "Ostatnia: " << word[word.length() - 1] << "\n";
}
//U¿ytkownik podaje tekst, a program zamienia wszystkie litery na wielkie.
void task8() {
    std::string text;
    std::cout << "Podaj tekst: ";
    
    std::getline(std::cin >> std::ws, text);

    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - 32; 
        }
    }
    
    std::cout << "Wynik: " << text << "\n";
}
//Napisz program, który wypisuje tekst od koñca.
void task9() {
	std::string text;
	std::cout << "Podaj tekst: ";
	std::getline(std::cin >> std::ws, text);

	for (int i = text.length() - 1; i >= 0; i--) {
		std::cout << text[i];
	}
	std::cout << "\n";
}
//Zamieñ wszystkie cyfry na znak „*”. Przyk³ad: „abc123” ? „abc***”.
void task10() {
	std::string text;
	std::cout << "Podaj tekst z cyframi: ";

	std::getline(std::cin >> std::ws, text);

	for (int i = 0; i < text.length(); i++) {
		if (text[i] >= '0' && text[i] <= '9') {
			text[i] = '*';
		}
	}

	std::cout << "Wynik: " << text << "\n";
}
//Napisz program, który bêdzie prosi³ o has³o. Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task11() {
	std::string correctPass = "Tajne123";
	std::string input;

	do {
		std::cout << "Podaj haslo: ";
		std::cin >> input;
	} while (input != correctPass);

	std::cout << "Dostep przyznany!\n";
}
//Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
void task12() {
	std::string text;
	int vowels = 0, consonants = 0;
	std::cout << "Podaj tekst: ";
	std::cin >> text;

	for (int i = 0; i < text.length(); i++) {
		char c = tolower(text[i]);
		if (c >= 'a' && c <= 'z') {
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
				vowels++;
			else
				consonants++;
		}
	}
	std::cout << "Samogloski: " << vowels << ", Spolgloski: " << consonants << "\n";
}
//Program wyci¹gaj¹cy informacje z numeru PESEL
void task13() {
	std::string pesel;
	std::cout << "Podaj PESEL: ";
	std::cin >> pesel;

	std::cout << "Rok urodzenia: " << pesel.substr(0, 2) << "\n";
	std::cout << "Miesiac: " << pesel.substr(2, 2) << "\n";
	std::cout << "Dzien: " << pesel.substr(4, 2) << "\n";

	// 10. cyfra PESEL: parzysta = kobieta, nieparzysta = mezczyzna
	int genderDigit = pesel[9] - '0';
	if (genderDigit % 2 == 0)
		std::cout << "Plec: Kobieta\n";
	else
		std::cout << "Plec: Mezczyzna\n";
}
//oproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym. Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.
void task14() {
	int number;
	std::string binary = "";
	std::cout << "Podaj liczbe: ";
	std::cin >> number;

	if (number == 0) binary = "0";

	while (number > 0) {
		if (number % 2 == 0) binary = "0" + binary;
		else binary = "1" + binary;
		number = number / 2;
	}
	std::cout << "Binarnie: " << binary << "\n";
}
int main()
{
	setlocale(LC_CTYPE, "polish");

	task14();
}
