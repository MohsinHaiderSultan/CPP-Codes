#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<< "Enter a marks : ";
    cin >> a;
    if (a>90)
    cout<<"A+";
    else if (80<a)
    cout<<"A";
    else if (70<a)
    cout<<"B";
    else
    cout<<"invalid"; 

    return 0;
}
