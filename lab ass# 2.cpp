#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter num of rows:";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int space = row - i; space >= 1; space--)
            cout << " ";
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
                cout << " *";
            else
                cout << "  ";
                
        }
        cout<<endl;
    }



return 0;
}
