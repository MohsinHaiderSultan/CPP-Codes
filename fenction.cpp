#include <iostream>
#include<cstdlib>
using namespace std;
long fect(int n);
int main()
{
	for(int i=0;i<=3;i++)
   {
	   	
	cout<<rand()%10<<endl;
	cout<<fect(rand())<<endl;
	
	return 0;
	}
	}
long fect(int n)
	{
		if(n<1)
	    return n*fect(n-1);
	}
	
