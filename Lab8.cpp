// Lab8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <clocale>
#include <string>
using namespace std;


//Дана строка. Преобразовать в ней все прописные латинские буквы в строчные.
void solution1() {
	cout << "Введите строку: ";
	string userString;
	getline(cin, userString);
	for (int i = 0; i < userString.length(); i++) {
		if (isupper(userString[i])) {
			userString[i] = tolower(userString[i]);
		}
	}
	cout << userString << "\n";
}


// Дана строка-предложение на английском языке. 
// Преобразовать строку так, чтобы каждое слово начиналось с заглавной буквы. 
// Словом считать набор символов, не содержащий пробелов и 
// ограниченный пробелами или началом/концом строки. 
// Слова, не начинающиеся с буквы, не изменять.
void solution2() {
	cout << "Введите строку: ";
	string userString;
	getline(cin, userString);
	if (isblank(userString[0])) {
		userString.erase(1, 0);
	}
	if (islower(userString[0])) {
		userString[0] = toupper(userString[0]);
	}
	for (int i = 0; i < userString.length(); i++) {
		if (isblank(userString[i]) and isalpha(userString[i + 1])) {
			userString[i + 1] = toupper(userString[i + 1]);
		}
	}
	cout << userString << "\n";
}


int main()
{
	setlocale(LC_ALL, "ru");
	solution1();
	solution2();
}