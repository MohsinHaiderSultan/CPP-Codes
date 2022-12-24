#include <iostream>
using namespace std;
int main()
{
	int num, pro = 1;
	cout << "Enter a number: ";
	cin >> num;
	if (num > 1)
	{

		for (int i = num; i > 0; i--)
		{
			pro = pro * i;
		}
		cout << "the pro is : " << pro;
	}
	else if (num < -1)
	{

		for (int i = num; i < 0; i++)
		{
			pro = pro * i;
		}
		cout << "the product is : " << pro;
	}
	else
		cout << "invalid";

	return 0;
}
