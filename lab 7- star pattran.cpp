#include <iostream>
using namespace std;
int main()
{
	int m;
	cout <<"Enter number of rows : ";
	cin>>m;
	 for( int i=0; i<=m; i++){
	
	 for( int j=m; j>=0; j--)
		
	 	{ if(j>=i)
	 		cout<<"*";
	 	else
	 	    cout<<" ";
	 		}		 
		    
	 		cout<<endl;
	 }
	
	for( int i=0; i<=m; i++)
		{
	for( int j=i-1; j>=0; j--)
	{
		
			
				cout<<"*";
				}
			cout<<endl;
	}
	return 0;
}
