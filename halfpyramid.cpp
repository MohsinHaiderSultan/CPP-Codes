#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter rows :";
    cin>>row;
    for(int i=1; i<=row; i++){
        for(int space=0;space<=row-i;space++)
        cout<<" ";
        for(int j=1;j<=i;j++)
        cout<<" *";
        cout<<endl;

    }


}