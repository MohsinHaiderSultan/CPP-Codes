#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int space=row-i;space>=1;space--)
        cout<<" ";
        for(int j=i;j>=1;j--)
    
        cout<<"*";
        cout<<endl;
    }
    
}