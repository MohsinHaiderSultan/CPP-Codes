//mohsin haider sultan

#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter x : ";
	cin>>x;
	cout<<"Enter y : ";
	cin>>y;
	if(x>0 && y>0)
	    cout<<" ("<<x <<","<< y <<")"<<" both coordinate points are +ve so they lies in 1st Quardrant";
	else if(x<0 && y>0)
	    cout<<" ("<<x <<","<< y <<")"<<" the coordinate point of x is negative and y positive so they lies in 2nd Quardrant";
	else if(x>0 && y<0)
	    cout<<" ("<<x <<","<< y <<")"<<" the coordinate point of x is +ve and y -ve so they lies in 4rd Quardrant";
	else if(x<0 && y<0)
	    cout<<" ("<<x <<","<< y <<")"<<" both coordinate points are -ve so they lies in 3rd Quardrant";
	else
	    cout<<"you Enter invalid number";
	
	
   return 0;	
}
