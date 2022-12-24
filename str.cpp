#include <iostream>
using namespace std;
int iprint()
{
	int m=7;
	for( int j=1; j<=m; j++)
	{
		for( int i=1; i<=m; i++)
		{
			if(j==1 || j==m || i==m/2+1 )
			{
				cout<<"*";
			}
			else
		   {
				cout<<" ";
			}
				}
			cout<<endl;
	}
}
int heart(){

	int r , a;
	for(r=0; r<6; r++)
	{
		for( a=0; a<7; a++)
		{
			if((r==0 && a%3!=0) || (r==1 && a%3==0)||( r-a==2)||(r+a==8))
			{
				cout<<"*";
			}
		    else
		    {
				cout<<" ";
			}
		}
			cout<<endl;
	}
}
 
int mprint()
{
	int m=7,n=1;
	for(int i=1; i<=m; i++)
	{
		for( int j=1;j<=m; j++)
		{
		   if(j==1 || j==m ||(j==n || j==m-n+1)&& i<=m/2+1)
			{
			 cout<<"*";
			}
			else
			{
				cout<<" ";
			}
			
		}
		n++; 
	cout<<endl;
	}
}

int main(){
	iprint();
	cout<<endl;
	heart();
	cout<<endl;
	mprint();
	
	
}
