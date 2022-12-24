#include <iostream>
using namespace std;
int main()
{
	int num, sum;
	cout << "Enter a number: ";
	cin >> num;
	if (num > 0)
	{

		for (int i = num; i >= 1; i--)
		{
			sum += i;
		}
		cout << "the sum is : " << sum;
	}
	else if (num < 0)
	{

		for (int i = num; i <= 0; i++)
		{
			sum += i;
		}
		cout << "the sum is : " << sum;
	}
	else
		cout << "invalid";
	return 0;
}
