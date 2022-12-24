//write a program that inputs character and display weather it is a vowel or not.
#include<iostream>
using namespace std;
 
main()
{
	char ch;
	   cout<<"Enter a character to check it vowel or not : ";
	   cin>>ch;
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	   cout<<ch<<" is vowel";
	else
	   cout<<ch<<" is not vowel";
	
	return 0;
	
}
