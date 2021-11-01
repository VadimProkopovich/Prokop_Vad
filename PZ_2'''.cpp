#include<iostream>
#include<cmath>
using namespace std;
int main()
{

	setlocale(LC_ALL, "Rus");

	int month;
	
	cout << " Введите номер месяца  " << endl;
	
	cin >> month;

	switch (month)
	{
	case 1:

		cout << "Ваша пора года - зима" << endl;

		break;

case 2:

		cout << "Ваша пора года - зима" << endl;

		break;
		
		case 12:

		cout << "Ваша пора года - зима" << endl;

		break;
	case 3:

		cout << "Ваша пора года - весна" << endl;

		break;

case 4:

		cout << "Ваша пора года - весна" << endl;

		break;
		
		case 5:

		cout << "Ваша пора года - весна" << endl;

		break;


case 6:

			cout << "Ваша пора года - лето" << endl;

			break;

case 7:

			cout << "Ваша пора года - лето" << endl;

			break;

case 8:

			cout << "Ваша пора года - лето" << endl;

			break;

	case 9:

		cout << "Ваша пора года - осень" << endl;

		break;

case 10:

		cout << "Ваша пора года - осень" << endl;

		break;
		
		case 11:

		cout << "Ваша пора года - осень" << endl;

		break;
	default:

		cout << "Нет месяца с таким номером " << endl;

		break;
	}
	return 0;
}
