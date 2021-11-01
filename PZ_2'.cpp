#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a;
	setlocale(LC_ALL, "Rus");
	cout << "Введите целое трёхзначное число" << endl;
	cin >> a;
	cout << "Среднее арифметическое его чисел = " << ((a / 100) + ((a / 10) % 10) + (a % 10)) / 3. << endl;
	return 0;
}