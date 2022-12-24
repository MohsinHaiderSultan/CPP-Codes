#include <iostream>
using namespace std;
//67char grades(a);
int main()
{
	int a;
    cout<< "Enter a marks : ";
    cin >> a;
    if (a>=90 && a<=100)
    cout<<"A1";
    else if (a>=80 && a<90)
    cout<<"A+";
    else if (a>=70 && a<80 )
    cout<<"A";
    else if (a>=60 && a<70 )
    cout<<"B";
    else if (a>=50 && a<60 )
    cout<<"C";
    else if (a>=0 && a<50 )
    cout<<"fail";
    else
    cout<<"invalid"; 

    return 0;
}

