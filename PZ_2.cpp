#include<iostream>
#include<cmath>

using namespace std;
int main()

{
	int a;
	setlocale(LC_ALL, "Rus");
	cout << "Введите целое трёхзначное число " << endl;
	cin >> a;
	a = a % 10;
	if (a == 0)
		cout << "Введенное число чётное" << endl;
	else
		cout << "Введённое число нечётное" << endl;
	return 0;
}