#include <iostream>
using namespace std;
int main()
{ 
 float area,l,w,tile=4,box=1.44;
 cout<<"Enter length of room: ";
 cin>>l;
 cout<<"Enter width of room: ";
 cin>>w;
 area=l*w;
 cout<<"Area of room is : "<<area<<" f"<<endl;
 cout<<"Total tiles need for room is : "<<area/4<<" f"<<endl;
 cout<<"Area in metters : "<<area/3<<" msq"<<endl;
 cout<<"One box is=1.44 metters square so total boxes requid : "<<(area/12)/1.44<<" msq"<<endl;
 
	return 0;
}


