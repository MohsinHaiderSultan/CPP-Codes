#include <iostream>
#include<cmath>
using namespace std;
int main(){
      int a,b,c,d,f;
      cout<<"enter first value: ";
      cin>>a;
      cout<<"enter 2nd value: ";
      cin>>b;
      c=pow(a,2)+pow(b,2)+2*a*b;
      d=pow(a,2)+pow(b,2)-(2*a*b);
      f=(a+b)*(a-b);
      
      cout<<"(a+b)^2     : "<<c<<"\n(a-b)^2     : "<<d<<"\n a^2 - b^2  : "<<f;
	return 0;
}
