#include<iostream>
using namespace std;
int main(){


int sum[3][3];
  int a[3][3]={{2,3,4},
		            {-1,3,0},
		            {33,-6,1}};
		int b[3][3]={{9,2,5},
		            {0,5,4},
		            {2,-3,3}};
		            cout<<"\n\n\n";
  for(int i=0; i<3; i++){
  	for(int j=0; j<3; j++){
			
  	sum[i][j]=a[i][j]+b[i][j];
  cout<<sum[i][j]<<" \t";}
  cout<<endl;
		}
		
   
   cout<<"\n______________________\n";

return 0;
}

