#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(0, "");
	int b, i;
	float n;
	
	cout << "Введите переменную B (B > 100 или B = 100)" << endl;
	cin >> b;

	n = 0;

	if (b >= 100)
	{
		for (i = 100; i <= b; i++)
		{
			n = n + pow(i, 2);
		}

		b = (b - 100) + 1;
		n = n / b;
		cout << "Среднее арифметическое от 1 до 100 равно " << n << endl;
	}
	else
	{
		cout << "Вы ввели некорректную переменную B! Попробуйте еще раз." << endl;
	}
	
	system("pause");
	return 0;
} 
