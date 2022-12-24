#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int row;
    cout<<"Enter no of rows: ";
    cin>>row;
    for ( int i = row; i>=-row; i--)
    {
        for(int k=1; k<=abs(i); k++)
		   cout<<"  ";
        for(int j=row; j>=abs(i); j--){
         if (j==1 || j==i )
          cout<<"  * ";
         else
           cout<<"    ";
        }
        
    cout<<endl;
    }
//   for ( int i = row-1; i>=1; i--)
//    {
//        for(int k=i; k<row; k++)
//		   cout<<"  ";
//        for(int j=1; j<=i; j++){
//         if (j==1 || j==i )
//          cout<<"   *";
//         else
//           cout<<"    ";
//        }
//        
//    cout<<endl;
//    } 
}
