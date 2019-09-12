#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	double a,b,c,d,x1,x2;

	cout <<"Введите коэффиценты уравнения A, B и C - соответственно " << endl;
	cin >> a >> b >> c;
	d = pow(b,2) - 4 * a * c;

 	if (d < 0)
	{
		cout <<"У уравнения нет решения";
	}

	else if (d == 0)
	{
		x1 = -b / 2*a;
		cout << "Корень уравнения = "<< x1;
	}

	else if (d > 0)
	{
		x1 = ((-b - sqrt(d))/2*a);
		x2 = ((-b + sqrt(d))/2*a);
		cout << "Первый корень уравнения = "<< x1 << endl;
		cout << "Второй корень уравнения = "<< x2 << endl;
	}

	system("pause");
	return 0;
}
