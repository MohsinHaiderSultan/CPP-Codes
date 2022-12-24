#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	
	int choice, a;
	cout << "\n  '1' for swap two numbers \n  '2' for find next char or int  \n  '3' for dimond star pattren  \n\n Enter choice: ";
	cin >> choice;
	
	switch(choice){
		case 1:{
			cout<<"Wellcome to swap two number section \n\n";
			{
	int a, b;
	cout << "\n\n   Enter 1st num: ";
	cin >> a;
	cout << "   Enter 2nd num: ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << " \n   After swap : "<<endl;
	cout << "    Now The 1st num is: " << a << endl;
	cout << "    Now The 2nd num is: " << b;

	
}

			break;
		}
		case 2:{
		cout<<"Wellcome to next char section \n\n";
	int choice, a;
	cout << "\n   Enter '1' for find next of charecter & '2' for find next of intteger : ";
	cin >> choice;
	cout<<endl;
	
	if (choice == 1)
	{
			char ch;
	cout<<"\n   Enter a Charecter: ";
	cin>>ch;
	if(ch>=32&&ch<=47 || ch>=57&&ch<=127)
	{ ch=ch+1;
	  cout<<"\n   Next Charecter: "<<ch;
	}

	else
	cout<<" \n   sorry! Wrong enter it`s not charecter";
	return 0;
}
	

else if (choice == 2)
	{
		cout << "  Enter a num: ";
		cin >> a;
		cout << "  The next integer is: " << a + 1;
	}
	else
		cout << "   sorry! invalid choice";

			break;
		}cout<<"    Thank you \n\n\n";
case 3:
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

			}
default:
	cout<<"\n\n\n     Invalid Number Enter";
	
	}
	cout<<" \n\n\n     Thank you \n\n\n";
	return 0;
}
	


