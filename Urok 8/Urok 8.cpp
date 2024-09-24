#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c, s;
	string d, f, g;
	cout << "Выберите действие:\n 0 для соединения \n 1 - сложения \n 2 - умножения \n 3 - вычитания \n 4 - целого деления \n 5 - деления с остатком" << endl;
	cin >> a;
	//cout << boolalpha;
	if (a == 1)
	{
		cout << "Введите 1 число " << endl;
		cin >> b;
		cout << "Введите 2 число " << endl;
		cin >> c;
		s = b + c;
		cout << "Сумма 2х чисел = " << s << endl;
	}
	else
		if (a == 0)
		{
			cout << "Введите 1 слово" << endl;
			cin >> d;
			cout << "Введите 2 слово" << endl;
			cin >> f;
			g = d + " " + f;
			cout << "Соединяем слова = " << g << endl;
		}
		else
			if (a == 2)
			{
				cout << "Введите 1 число" << endl;
				cin >> b;
				cout << "Введите 2 число" << endl;
				cin >> c;
				s = b * c;
				cout << "Произведение 2х чисел  = " << s << endl;
			}
			else
				if (a == 3)
				{
					cout << "Введите 1 число" << endl;
					cin >> b;
					cout << "Введите 2 число" << endl;
					cin >> c;
					if (b <= c)
					{
						cout << "От меньшего нельзя отнять большее" << endl;
					}
					else
					{
						s = b - c;
						cout << "Разность 2х чисел  = " << s << endl;
					}

				}
				else
					if (a == 4)
					{
						cout << "Введите 1 число" << endl;
						cin >> b;
						cout << "Введите 2 число" << endl;
						cin >> c;
						s = b / c;
						cout << "Частное 2х чисел  = " << s << endl;
					}
					else
						if (a == 5)
						{
							cout << "Введите 1 число" << endl;
							cin >> b;
							cout << "Введите 2 число" << endl;
							cin >> c;
							if (b <= c)
							{
								cout << "Меньше не делится на большее" << endl;
							}
							else
							{
								s = b % c;
								cout << "Остаток от деления  = " << s << endl;
							}
						}
						else
						{
							cout << "Нет такой команды" << endl;
						}
}
