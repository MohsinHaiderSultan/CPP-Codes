#include <iostream>
using namespace std;
int main()
{
	int start, end;
	cout << "Stating no: ";
	cin >> start;
	cout << "End no: ";
	cin >> end;

	if (start < end)
	{

		for (int i = start; i <= end; i++)
		{

			cout << i << endl;
		}
	}
	else if (start > end)
	{

		for (int i = start; i >= end; i--)
		{
			cout << i << endl;
		}
	}
	else if (start = end)
	{
		cout << "both are equal";
	}
	else
	{
			cout << "\ninvalid! plzz Enter number for further process not string or char..";
    }
      
	   
	return 0;
}
