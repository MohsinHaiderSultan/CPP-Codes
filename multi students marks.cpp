#include<iostream>
using namespace std;
int main(){
	int number,marks;
	string grade,name;
	cout<<"Enter how many students: ";
	cin>>number;
	int i=1;
	while(i<number){
		cout<<"Enter name of student "<<i<<": ";
		cin>>name;
		cout<<"Enter marks of student "<<i<<": ";
		cin>>marks;
		{
		if (marks>=90 && marks<=100)
        grade="A1";
        else if (marks>=80 && marks<90)
        grade="A+";
        else if (marks>=70 && marks<80 )
         grade="A";
        else if (marks=60 && marks<70 )
         grade="B";
        else if (marks>=50 && marks<60 )
         grade="C";
        else if (marks>=0 && marks<50 )
        grade="fail";
        else
        cout<<"invalid"; }
    cout<<name<<"\t"<<marks<<"\t"<<grade;
	i++;

	}
	
	return 0;
}
