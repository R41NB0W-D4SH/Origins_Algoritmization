#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cout <<"Enter three nubmers: A, B & C \n";
	cin >> a >> b >> c;

	if (a < 2 || a > 5)
	{
		cout <<"Number A = "<< a <<" out of bounds\n";
	}
	else if (a == 2 || a == 5)
	{
		cout <<"Number A = "<< a <<" on ends of bounds\n";
	}
	else if (a > 2 && a < 5)
	{
		cout <<"Number A = "<< a <<" in bounds\n";
	}

		if (b < 2 || b > 5)
	{
		cout <<"Number B = "<< b <<" out of bounds\n";
	}
	else if (b == 2 || b == 5)
	{
		cout <<"Number B = "<< b <<" on ends of bounds\n";
	}
	else if (b > 2 && b < 5)
	{
		cout <<"Number B = "<< b <<" in bounds\n";
	}

		if (c < 2 || c > 5)
	{
		cout <<"Number C = "<< c <<" out of bounds\n";
	}
	else if (c == 2 || c == 5)
	{
		cout <<"Number C = "<< c <<" on ends of bounds\n";
	}
	else if (c > 2 && c < 5)
	{
		cout <<"Number C = "<< c <<" in bounds\n";
	}

	system("pause");
	return 0;
}
