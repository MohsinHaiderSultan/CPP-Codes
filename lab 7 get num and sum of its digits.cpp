#include <iostream>
using namespace std;
int main()
{
    int num,sum=0,rem;
    cout<<"Enter number: ";
    cin>>num;
    if(num>0){
	
     for(int i=num; i>0; i--)
        {
            rem = num%10;
            num /= 10;
            sum=sum+rem;
            
        }}
    
	
	else if(num<0)
	{for(int i=num; i<0; i--)
        {
            rem = num%10;
            num /= 10;
            sum=sum+rem;
		
	}}
	
   cout<<"The sum of digits of givin Number is : "<<sum;
   
    return 0;
}

