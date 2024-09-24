#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a1, b1, c1, s1;
	string d1, f1, g1;
	cout << "Выберите действие:\n 0 для соединения \n 1 - сложения \n 2 - умножения \n 3 - вычитания \n 4 - целого деления \n 5 - деления с остатком" << endl;
	cin >> a1;
	//cout << boolalpha;
	if (a1 == 1)
	{
		cout << "Введите 1 число " << endl;
		cin >> b1;
		cout << "Введите 2 число " << endl;
		cin >> c1;
		s1 = b1 + c1;
		cout << "Сумма двух чисел = " << s1 << endl;
	}
	else
		if (a1 == 0)
		{
			cout << "Введите 1 слово" << endl;
			cin >> d1;
			cout << "Введите 2 слово" << endl;
			cin >> f1;
			g1 = d1 + " " + f1;
			cout << "Соединяем слова = " << g1 << endl;
		}
		else
			if (a1 == 2)
			{
				cout << "Введите 1 число" << endl;
				cin >> b1;
				cout << "Введите 2 число" << endl;
				cin >> c1;
				s1 = b1 * c1;
				cout << "Произведение 2х чисел  = " << s1 << endl;
			}
			else
				if (a1 == 3)
				{
					cout << "Введите 1 число" << endl;
					cin >> b1;
					cout << "Введите 2 число" << endl;
					cin >> c1;
					if (b1 <= c1)
					{
						cout << "От меньшего нельзя отнять большее" << endl;
					}
					else
					{
						s1 = b1 - c1;
						cout << "Разность 2х чисел  = " << s1 << endl;
					}

				}
				else
					if (a1 == 4)
					{
						cout << "Введите 1 число" << endl;
						cin >> b1;
						cout << "Введите 2 число" << endl;
						cin >> c1;
						s1 = b1 / c1;
						cout << "Частное 2х чисел  = " << s1 << endl;
					}
					else
						if (a1 == 5)
						{
							cout << "Введите 1 число" << endl;
							cin >> b1;
							cout << "Введите 2 число" << endl;
							cin >> c1;
							if (b1 <= c1)
							{
								cout << "Меньше не делится на большее" << endl;
							}
							else
							{
								s1 = b1 % c1;
								cout << "Остаток от деления  = " << s1 << endl;
							}
						}
						else
						{
							cout << "Нет такой команды" << endl;
						}
}
