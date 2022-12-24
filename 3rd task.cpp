#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<< "Enter first marks : ";
    cin >> a;
   if (a>=50 && a<100)
       cout<<"pass";
   else if (a>=0 && a<50)
      cout<<"fail";
   else
   	  cout<<"invalid";
    
}
