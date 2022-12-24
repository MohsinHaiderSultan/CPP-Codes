#include <iostream>
#include<cmath>
using namespace std;
long double power(int x, int y);
int sum(int x,int y);
int sqroot(int a);
int main()
{ 
    int num1 , num2;
    cout<<"Enter num : ";
    cin>>num1;
    cout<<"Enter num 2: ";
    cin>>num2;
    cout<<"the sum is = "<<sum(num1,num2)<<endl;

   cout<<num1<<" power "<<num2<<" is = "<< power(num1,num2)<<endl;
   cout<<"sqroot of"<<num1<<" is = "<<sqroot(num1)<<endl;
return 0;
}
int sum(int x,int y){
    int sum=x+y;
    return sum;
}
long double power(int x, int y)
{
    return pow(x,y);
}
int sqroot(int a)
{
    return sqrt(a);
}