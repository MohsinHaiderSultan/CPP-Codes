#include <iostream>
using namespace std;
int main()
{
	float choice,total,t_l,l,w,w_c,c_b,b_a,a_w,normal,best ;
//	cout<<"press 1 for feets and 2 for meters: ";
//	cin>>choice;
//	if(choice==1){
	
	cout<<"Enter length of boundries in feet : ";
	cin>>l;
	cout<<"Enter wirdth of boundries in feet : ";
	cin>>w;
	t_l=2*(l+w);
	cout<<"Enter distance from A-block to W-block: ";
	cin>>a_w;
	cout<<"Enter distance from W-block to C-block: ";
	cin>>w_c;
	cout<<"Enter distance from C-block to B-block:  ";
	cin>>c_b;
    cout<<"Enter distance from B-block to A-block:  ";
	cin>>c_b;
	total=a_w+w_c+c_b+b_a;
	normal=t_l/10;
	best=total/10;
	cout<<"Total length is of best wire is = "<<total<<" feet "<<endl;
	cout<<"Total length is of normal wire is = "<<t_l<<" feet "<<endl;
	cout<<"one feet extra need every ten feet so extra best wire is = "<<best<<" feets "<<endl;
	cout<<"one feet extra need every ten feet so extra normal wire is = "<<normal<<" feets "<<endl;
	cout<<"in one coil 100f wire and you need best wire is :"<<(total+best)/100<<"coil(s) to complete wiring"<<endl;;
	cout<<"in one coil 100f wire and you need normal wire is :"<<(t_l+normal)/100<<"coil(s) to complete wiring"<<endl;
}
//	else if(choice==2){
//	cout<<"Enter length in m: ";
//	cin>>l;
//	cout<<"Enter wirdth in m : ";
//	cin>>w;
//	t_l=2*(l*w);
//	cout<<"Enter distance from A-block to W-block: ";
//	cin>>a_w;
//	cout<<"Enter distance from W-block to C-block: ";
//	cin>>w_c;
//	cout<<"Enter distance from C-block to B-block:  ";
//	cin>>c_b;
//    cout<<"Enter distance from B-block to A-block:  ";
//	cin>>c_b;
//	total=t_l+a_w+w_c+c_b+b_a;
//	best=total/10;
//	cout<<"Total length in meters is = "<<total<<"meters"<<endl;
//	cout<<"one metter extra need every ten meter so extra = "<<wire<<"meters"<<endl;
//	cout<<"in one coil 33.33m wire and you need : "<<(total+wire)/(100/3)<<"  coil(s) to complete wiring";
//	}
//	else
//	cout<< "invalid";
	
	
	

