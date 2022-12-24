#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	cout << "\n   Enter number of rows: ";
	cin >> a;
	cout << endl;
	for (int i = 1; i <= a; i++)
	{
		for (int s = abs(a - i); s >= 1; s--)
			cout << "  ";
		for (int j = abs(i); j >= 1; j--)
		{
			if (j == 1 || j == i)
				cout << "   *";
			else
				cout << "    ";
		}
		cout << endl;
	}

	for (int i = a - 1; i >= 1; i--)
	{
		for (int s = 1; s <= abs(a - i); s++)
			cout << "  ";
		for (int j = 1; j <= abs(i + 1); j++)
		{
			if (j == 1 || j == i)
				cout << "   *";
			else
				cout << "    ";
		}
		cout << endl;
	}

	return 0;
}

