#include <iostream>

using namespace std;

int main()
{
	float a, b, c, min, max;

	cout << "Enter three nubmers A, B and then C" << endl;
	cin >> a >> b >> c;

	min = a < b ? a : b;
	min = min < c ? min : c;
	max = a > b ? a : b;
	max = max > c ? max : c;

	cout << "Minimal value from numbers = " << min << endl;
	cout << "Maximum value from numbers  = " << max << endl;

	system("pause");
	return 0;
}
