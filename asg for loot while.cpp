// //  #include<iostream>
// //  using namespace std;
// // int main(){
// //     int i=1;
// //     while(i<10){
// //         cout<<i<<endl;
// //         i++;
// //   }
// //     return 0;
// //  }

//  #include<iostream>
//  using namespace std;
// int main(){

//     int num,sum=0,rem;
//     cout<<"Enter number: ";
//     cin>>num;
//     if(num>0){
// 	int i=num;
//      while( i>0)
//         {
//             rem = num%10;
//             num /= 10;
//             sum=sum+rem;
//             i--;

//         }}

// 	else if(num<0)
// 	{
//         int i=num;
//         while( i<0 )
//         {
//             rem = num%10;
//             num /= 10;
//             sum=sum+rem;

//              i--;

// 	}
//     }
//    cout<<"The sum of digits of givin Number is : "<<sum;

//     return 0;
//  }
#include <iostream>
using namespace std;
int main()
{
	int m;
	cout << "Enter number of rows : ";
	cin >> m;
	for (int i = 0; i <= m; i++)
	{

		for (int j = m; j >= 0; j--)

		{
			if (j >= i)
				cout << "*";
			else
				cout << " ";
		}

		cout << endl;
	}
}