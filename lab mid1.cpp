#include <iostream>
using namespace std;
int main()
{
	 int a, b;
	cout << "\n\n   Enter 1st num: ";
	cin >> a;
	cout << "   Enter 2nd num: ";
	cin >> b;
	
	
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "   No after swap the 1st num is: " << a << endl;
	cout << "   No after swap the 2nd num is: " << b;}
	

	return 0;
}

