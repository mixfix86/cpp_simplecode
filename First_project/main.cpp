#include<iostream>

using namespace std;

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, c;

	cout << "������� ����� 1!:";
	cin >> a;
	cout << "������� ����� 2:";
	cin >> b;
	cout << "������� ����� 3:";
	cin >> c;
	cout << "C���� �����: " << a + b + c << endl;
	cout << "������������ �����: " << a * b * c << endl;
	cout << "������� ��������������: " << double(a + b + c) / 3 << endl;
}