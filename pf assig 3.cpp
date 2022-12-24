#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void random();
void palindrom(int a);
int main()
{

  random();
  cout << "\n\n\n\n\n";
  int num1;
  cout << " Q:2 =>  Enter a num to check to find its reverse: ";
  cin >> num1;
  palindrom(num1);

  return 0;
}

void random()
{
  cout << "\n Q:1 => Fallowing are Ten random numbers between 1 to 100:\n\n ";
  int nums[10];
  srand(time(0));
  int i = 1;
  while (i <= 10)
  {
    nums[10] = rand() % 101;
    cout << " " << nums[10];
    i++;
    if (nums[0] < nums[10])
    {
      nums[0] = nums[10];
    }
  }
  cout << "\n  The largest Number is: " << nums[0];
}

void palindrom(int a)
{
  int temp, reverse = 0, remender;
  temp = a;
  while (temp != 0)
  {
    remender = temp % 10;                // to find last digit
    reverse = (reverse * 10) + remender; // to find reverse
    temp = temp / 10;                    // for remaning digits excluding last
  }
  cout << "\n\n The Reverse of given Number is: " << reverse << endl;

  //  for find given number is palindrom or not....
  if (reverse == a)
    cout << "\n\n\n\n\n Q:3 =>   The Given Number( "<<a<<" ) is palindrom  \n\n";
  else
    cout << "\n\n\n\n\n Q:3 =>  The Given Number ( "<<a<<" ) is not palindrom \n\n";
}

