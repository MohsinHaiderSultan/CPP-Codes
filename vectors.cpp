#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num, i = 0;
    vector<int> list;
    cout << "Enter '00' to stop.\n";
    while (true)
    {

        cout << "Enter Element " << i << ": ";
        cin >> num;
        if (num == 00)
            break;
        list.push_back(num);
        i++;
    }
    cout << endl;
    list.pop_back();
    list.insert(list.begin() + 2, 4000);
    for (int i = 0; i < list.size(); i++)
        cout << list.at(i) << " ";
    cout << endl;

    return 0;
}
