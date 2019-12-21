#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i, j = 0;
	string line, rewnd = "";

	cout << "Введите строку: ";
	getline(cin, line);

	for (i = 0; i < line.length(); i++)
	{
		if (line[i] != ' ') rewnd += tolower(line[i]);
	}

	for (i = 0; i < rewnd.length() / 2; i++)
	{
		if (rewnd[i] != rewnd[rewnd.length() - i - 1])
		{
			cout << endl << "Строка не читается наоборот корректно!" << endl;
			return 0;
		}
	}
	cout << "Строка читаема наоборот (Строка - первертыш)!" << endl;
	system("pause");
	return 0;
}
