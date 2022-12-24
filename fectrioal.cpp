#include<iostream>
using namespace std;
int main(){
	int sum=0;
	
	
	for(int j=0;j<=5;j++){
	int	f=1;
	int i=j;
	while(i>=1){
		
		
		f=f*i;
		i--;
			}
	    sum=sum+f;
	    }
	

		cout<<sum;
}
