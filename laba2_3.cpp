#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	int a;

	cout <<"Введите возраст человека (от 1 до 100) = ";
	cin >> a;

	if ((fmod(a,10)) || (fmod(a,5)) || (fmod(a,6)) || (fmod(a,7)) || (fmod(a,8)) || (fmod(a,9)))
	{
		cout << a <<" лет ";
	}
	else if ((fmod(a,1))
	{
		cout << a <<" год ";
	}
	else if ((fmod(a,2) || (fmod(a,3)) || (fmod(a,4)))
	{
		cout << a <<" года ";
	}

	system("pause");
	return 0;
}
