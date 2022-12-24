//#include <iostream>
//using namespace std;
//int main ()
//{
//	float radious,area;
//	cout <<"Enter radious:";
//	cin>> radious;
//	area=3.14*radious*radious;
//	cout<<"area of circle:"<<area<<radious;
//	cout<<endl;
//}
//#include<iostream>
//using namespace std;
//
//int main(){
//    int row,col;
//    cin>>row>>col;
//    for ( int i = 1; i<=row; i++)
//    {
//        for(int j=1; j<=col ;j++){
//            
//        }
//        if(i==1 ||i==row || j==1 || j==col){
//        cout<<"*";}
//        else{
//        cout<<" ";}
//        
//        
//    }
//    
//}
#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter no of rows: ";
    cin>>row;
    int space=row-1;
    for ( int i = 1; i<=row; i++)
    {
        for(int j=space; j>=0 ;space--){
		cout<<"";}
        for(int j=1; j<=(i*2-1); j++)
        cout<<"*";
        cout<<endl;
        }
    
    
    
}


