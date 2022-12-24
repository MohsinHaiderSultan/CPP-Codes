#include <iostream>
using namespace std;
int main()
{
//	int num,temp ,reverse=0;
//	cout<<"enter nunber: ";
//	cin>>num;
//	temp=num;
//	while(temp>0){
//		reverse=(temp%10);
//		cout<<reverse;
//     	temp=temp/10;
//	
//	}
	
	int num;
	cout<<"enter last num: ";
	cin>>num;
	for(int a=0; a<=num; a++){
		for(int b=a; b<=num;b++){
		if(a%b==1){
			cout<<b;
		}
		}
	}
//	cin>>ch;
//	for(char i='A'; i<=ch; i++){
//		for(char j=i; j<=i+1; j++){
//			cout<<" "<<j;
//			
//		}
//		cout<<endl;

	
	return 0;
}
