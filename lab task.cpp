#include<iostream>
using namespace std;
//int sum(int a , int b);
//int sub(int c ,int d);
//int Xing(int c ,int d);
//int division(int c ,int d);
//int main(){
//
//int choice,num1,num2;
// cout<<"\n  calculator for perform basic operations\n\n";
// cout<<"\n   Enter 1st number: ";
// cin>>num1;
// cout<<"   Enter 2nd number: ";
// cin>>num2;
//	cout<<"    1 for sum  \n    2 for subtrection\n    3 for Multiplication\n    4 for division\n\n ";
//	cout<<"   Enter a number: ";
//	cin>>choice;
//	switch (choice)
//	{
//	case 1:{
//		cout<<"\n   The sum is: "<<sum(num1, num2);
//		break;
//	}
//	
//	case 2:{
//		cout<<"\n   The subtraction is: "<<sub(num1, num2);
//		break;
//	}
//	
//	case 3:{
//	cout<<"\n   The Multiplaction is: "<<	Xing(num1, num2);
//		break;
//	}
//	
//	case 4:{
//		cout<<"\n   The Division is: "<<division(num1, num2);
//		break;
//	}
//	
//	default :
//	cout<<"\n   invalid choice";
//	}
//
//
//return 0;
//}
//
//int sum(int a , int b){
//	int sum=a+b;
//	return sum;
//}
//
//int sub(int c ,int d){
//	int sub=c-d;
//	return sub;
//}
//
//int Xing(int c ,int d){
//	int Xing=c*d;
//	return Xing;
//}
//int division(int c ,int d){
//	int division=c/d;
//	return division;
//}

int main(){
//	int num1,num2;
//	cout<<"Enter a number for table: ";
//	cin>>num1;
//	for(int i=0; i<11; i++){
//		cout<<" "<<num1<<" x "<<i<<" = "<<num1*i<<endl;
//	}
int num, arr[]={10,20,40,30,50};
cout<<"Enter a num: ";
cin>>num;
for(int i=0; i< 5; i++){
	if(num==arr[i]){
	
	cout<<"The num is found in an Array";
	}
	else{
	
	cout<<"The num is not found in an Array";
	break;
}}
}
