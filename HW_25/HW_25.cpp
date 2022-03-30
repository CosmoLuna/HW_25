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
	cout << "�������� ������: " << a.title << endl << "���: " << a.year << endl;
	cout << "����: " << a.genre << endl << "�����������������: " << a.duration << endl;
	cout << "���� �� ����: " << a.price << "\n\n";
}
movies expensive(movies a, movies b, movies c) {
	if (a.price > b.price && a.price > c.price)
		return a;
	if (b.price > a.price && b.price > c.price)
		return b;
	return c;
}
void updateInfo(movies& a) {
	cout << "��������, ����� ���������� � ������ " << a.title << " ������ �������� : " << endl << "1. ��������; " << endl;
	cout << "2. ��� ������;" << endl << "3. ����;" << endl << "4. �����������������;" << endl << "5. ���� �� ����." << endl << "���� -> ";
	int x;
	cin >> x;
	switch (x) {
	case 1: cout << "������� ����� ��������: ";
		getline(cin, a.title);
		getline(cin, a.title); break;
	case 2: cout << "������� ����� ��� ������: ";
		cin >> a.year; break;
	case 3: cout << "������� ����� ����: ";
		getline(cin, a.genre);
		getline(cin, a.genre); break;
	case 4: cout << "������� ����� �����������������: ";
		cin >> a.duration; break;
	case 5: cout << "������� ����� ���������: ";
		cin >> a.price; break;
	default: cout << "������ �����" << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	//�������
	movies film1;
	film1.title = "���������";
	film1.year = 2008;
	film1.genre = "�����";
	film1.duration = 159;
	film1.price = 450;
	movies film2 = { "���������", 2016, "����������", 116, 350 };
	movies film3 = { "�����", 2014, "�����", 118, 400 };

	// ������ 1
	showMovie(film1);
	showMovie(film2);
	showMovie(film3);

	// ������ 2
	movies max = expensive(film1, film2, film3);
	cout << "����� ������� ���� �� �����: " << max.price << "\n\n";

	// ������ 3
	updateInfo(film1);
	cout << "------------------------------" << endl;
	showMovie(film1);
	showMovie(film2);
	showMovie(film3);

	return 0;
}