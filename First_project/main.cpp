#include<iostream>

using namespace std;

int main()
{
	system("chcp 1251");

	int a, b, c;

	cout << "Введите число 1:";
	cin >> a;
	cout << "Введите число 2:";
	cin >> b;
	cout << "Введите число 3:";
	cin >> c;
	cout << "Cумма чисел: " << a + b + c << endl;
	cout << "Произведение чисел: " << a * b * c << endl;
	cout << "Среднее арифметическое: " << double(a + b + c) / 3 << endl;
}