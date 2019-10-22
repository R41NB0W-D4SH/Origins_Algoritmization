#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int b, i, j, n;

	cout << "Введите переменную N" << endl;
	cin >> n;
	b = 0;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			b = b + i;
			cout << b;
		}
		b = 0;
		cout << endl;
	}

	system("pause");
	return 0;
}
