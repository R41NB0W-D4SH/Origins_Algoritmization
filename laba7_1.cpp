#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	string line;

	cout << "Введите какую-нибудь строку: ";
	cin >> line;

	cout << endl << "Длина, введенной строки: " << line.length() << endl;
	system("pause");
	return 0;
}
