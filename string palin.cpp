#include<iostream>
using namespace std;
int main(){
 string text;
 cout<<"Enter a String  and For termnate press '#' :\n ";
 cin>>text;
 cout<<text;
 for(int i=0; i<=text.length()/2; i++){
	if(text[i]!=text[text.length()-i-1])
	cout <<"text is plandrome ";
	else
	cout <<"text is not plandrome ";}
	
return 0;
}

