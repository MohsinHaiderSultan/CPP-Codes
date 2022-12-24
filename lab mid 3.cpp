#include<iostream>
using namespace std;
int main(){
int choice,a;
cout<<"Enter 1 for find next of charecter  and 2 for next of int";
cin>>choice;
 if(choice==1){
	char ch;
   cout<<"Enter charecter is: ";
   cin>>ch;
   cout<<"The next charecter is: "<<(char)(ch+1);}
  else if(choice==2){
  	cout<<"Enter a num :";
  	cin>>a;
  	cout<<"The next integer is: "<<a+1;
  	
		}
		else 
		cout<<"invalid choice";


return 0;
}

