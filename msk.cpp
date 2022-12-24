#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the value:";
cin>> n;
for (int s=1;s<=n;s++)
{ 
for(int d=n;d>=1;d--)
{ if(s>=d)
{cout<<"* ";
}
else
cout<<" ";
}
cout<<endl;
}
}
