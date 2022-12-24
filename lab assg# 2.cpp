#include <iostream>
using namespace std;
int main()
{
    float r, d;
    int choice;
    cout << "Press 1 to enter dimeter of circle & 2 for redius: ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "Enter dimeter: ";
        cin >> d;
        float area = 3.14 * (d / 2) * (d / 2);
        cout << "The area of circle according dimeter is: " << area;
    }
    else if (choice == 2)
    {
        cout << "Enter redius : ";
        cin >> r;
        float area = 3.14 * (r * r);
        cout << "The area of circle according redius is: " << area;
    }
    else
    {
        cout << "invalid entery Thank you";
    }
    return 0;
}
