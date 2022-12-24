#include<iostream>
using namespace std;
int stars(int a);
int main()
{
int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;
    stars(int rows,int space);
    return 0;
}

int stars(int a){

    for(int i = 1, k = 0; i <= a; ++i, k = 0)
    {
        for(int space = 1; space <= a-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }  
}