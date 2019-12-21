#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	string line;
    char c;

	cout << "Введите какую-нибудь строку: ";
	getline(cin, line);

	for (int i = 0; i < line.length(); i++)
    {
        if (isupper(line[i]))
        {
            line[i] = towlower(line[i]);
        }
    }

	cout << endl << line << endl;
	system("pause");
	return 0;
}
