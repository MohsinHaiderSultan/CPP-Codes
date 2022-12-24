#include <iostream>
using namespace std;

int main()
{
	int num[100], sum = 0;
	int i = 0, j,count=0,add=0;
	cout << "Enter -1 to exit the program" << endl;
	// while( j>-1) or
	for (;;)
	{
		cout << "Enter num " << (i + 1) << " : ";
		cin >> num[i];
		if (num[i] == -1)
			break;
		if (num[i] % 2 == 0)
			cout << "";
		else
			sum += num[i];
	

		i++;
	}

	cout << "\nThe sum of odd numbre is: " << sum;
//	cout << "\nThe sum of prime numbre is: " << add;

	return 0;
}


