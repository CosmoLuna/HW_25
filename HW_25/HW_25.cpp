#include <iostream>
#include <string>
using namespace std;

struct movies {
	string title;
	int year = 0;
	string genre;
	int duration = 0;
	int price = 0;
};
void showMovie(movies a) {
	cout << "Название фильма: " << a.title << endl << "Год: " << a.year << endl;
	cout << "Жанр: " << a.genre << endl << "Продолжительность: " << a.duration << endl;
	cout << "Цена за диск: " << a.price << "\n\n";
}
movies expensive(movies a, movies b, movies c) {
	if (a.price > b.price && a.price > c.price)
		return a;
	if (b.price > a.price && b.price > c.price)
		return b;
	return c;
}
void updateInfo(movies& a) {
	cout << "Выберите, какую информацию о фильме " << a.title << " хотите обновить : " << endl << "1. Название; " << endl;
	cout << "2. Год выхода;" << endl << "3. Жанр;" << endl << "4. Продолжительность;" << endl << "5. Цена за диск." << endl << "Ввод -> ";
	int x;
	cin >> x;
	switch (x) {
	case 1: cout << "Введите новое название: ";
		getline(cin, a.title);
		getline(cin, a.title); break;
	case 2: cout << "Введите новый год выхода: ";
		cin >> a.year; break;
	case 3: cout << "Введите новый жанр: ";
		getline(cin, a.genre);
		getline(cin, a.genre); break;
	case 4: cout << "Введите новую продолжительность: ";
		cin >> a.duration; break;
	case 5: cout << "Введите новую стоимость: ";
		cin >> a.price; break;
	default: cout << "Ошибка ввода" << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	//Задание
	movies film1;
	film1.title = "Австралия";
	film1.year = 2008;
	film1.genre = "драма";
	film1.duration = 159;
	film1.price = 450;
	movies film2 = { "Пассажиры", 2016, "фантастика", 116, 350 };
	movies film3 = { "Кэрол", 2014, "драма", 118, 400 };

	// Задача 1
	showMovie(film1);
	showMovie(film2);
	showMovie(film3);

	// Задача 2
	movies max = expensive(film1, film2, film3);
	cout << "Самая высокая цена за фильм: " << max.price << "\n\n";

	// Задача 3
	updateInfo(film1);
	cout << "------------------------------" << endl;
	showMovie(film1);
	showMovie(film2);
	showMovie(film3);

	return 0;
}