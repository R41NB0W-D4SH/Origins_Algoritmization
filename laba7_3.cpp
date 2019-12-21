#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	string line1, line2;

	cout << "Введите какую-нибудь строку: ";
	getline(cin, line1);
    cout << "Введите какую-нибудь строку: ";
	getline(cin, line2);

	if (line2.length() == line1.length())
    {
        for (int i = 0; i < line1.length(); i++)
		{
			if (tolower(line1[i]) != tolower(line2[i]))
			{
				cout << endl << "no" << endl;
				return 0;
			}
		}
    }
    cout << endl << "yes" << endl << endl;
	system("pause");
	return 0;
}
