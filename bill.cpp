#include <iostream>
using namespace std;
//bill system
int main()
{
	cout<<"1"*20;
	int a;
    cout<< "Enter number of units : ";
    cin >> a;
    if (a>=0 && a<=100){
	   a=a*10;
       cout<<"bill is : "<<a;
	}
	
	else if (a>100 && a<=200){
    	a=a*20;
        cout<<"bill is : "<<a;
	}
	
	else if (a>200 ){
	  a=a*40;
      cout<<"bill is : "<<a;
	}
	else
	cout <<"invalid input";
	return 0;
}
