//write a program that inputs a numbers and print weather it is even or odd.
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter a number to check";
	cin>>a;
	
	if(a%2==0){
		cout<<"the number you enter is even";
	}
	else
	    cout<<"the number you enter is odd"; 
	    
	return 0;
}
