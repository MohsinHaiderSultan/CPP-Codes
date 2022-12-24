#include<iostream>
#include<cstring>
#include<conio.h>
#include<windows.h>
#include<ios>
#include<limits>
using namespace std;
struct record
{
    string passanger_name,Flight_name,seat_num,nplate,root;
    int price;


};
int count=0;
record al[50];
void display()
{ string cat;
int t=0;
    cout<<"Enter the seat number to display Data:";
    cin>>cat;
    for(int i=0;i<50;i++)
    {
        if(cat==al[i].seat_num)
        {
            t++;
            cout<<" Flight name is:"<<al[i].Flight_name<<endl;
            cout<<" Enter pasanger name is:"<<al[i].passanger_name<<endl;
            cout<<" Flight Registraton Number :"<<al[i].nplate<<endl;
            cout<<" Flight current route is:"<<al[i].root<<endl;
            cout<<" Flight seat number is:"<<al[i].seat_num<<endl;
            cout<<" Current seat price is:"<<al[i].price<<endl;

            break;
        }
    }
    if(t==0)
        cout<<"seat number is not matched."<<endl;
    else
        cout<<"   Process Completed."<<endl;
}
void fulldisplay()
{


    for(int i=0;i<count;i++)
    {



            cout<<" Flight is:"<<al[i].Flight_name<<endl;
            cout<<" pasanger_name is:"<<al[i].passanger_name<<endl;
            cout<<" Flight Registraton Number i:"<<al[i].nplate<<endl;
            cout<<" Flight current root is:"<<al[i].root<<endl;
            cout<<" passenger seat number is:"<<al[i].seat_num<<endl;
            cout<<" Current seat price is:"<<al[i].price<<endl;



    }

        cout<<"   Process Completed."<<endl;
}
void displayname()
{ string cat;
int t=0;
    cout<<"Enter the passanger Name to display Data:";
    cin>>cat;
    for(int i=0;i<50;i++)
    {
        if(cat==al[i].passanger_name)
        {
            t++;
            cout<<" passanger name is:"<<al[i].Flight_name<<endl;
            cout<<" passanger name is:"<<al[i].passanger_name<<endl;
            cout<<" Flight Registraton Number i:"<<al[i].nplate<<endl;
            cout<<" Flight current root is:"<<al[i].root<<endl;
            cout<<" Flight seat number is:"<<al[i].seat_num<<endl;
            cout<<" Flight Current seat price is:"<<al[i].price<<endl;

            break;
        }
    }
    if(t==0)
        cout<<"Name is not matched."<<endl;
    else
        cout<<"   Process Completed."<<endl;
}
void displayFlight_name()
{ string cat;
int t=0;
    cout<<"Enter the  Flight name to display Data:";
    cin>>cat;
    for(int i=0;i<50;i++)
    {
        if(cat==al[i].Flight_name)
        {
            cout<<" Flight name is:"<<al[i].Flight_name<<endl;
            cout<<" passanger name is:"<<al[i].passanger_name<<endl;
            cout<<" Flight Registraton Number i:"<<al[i].nplate<<endl;
            cout<<" Flight current root is:"<<al[i].root<<endl;
            cout<<" Flight seat number is:"<<al[i].seat_num<<endl;
            cout<<" Flight Current seat price is:"<<al[i].price<<endl;
            t++;
            break;
        }
    }
    if(t==0)
        cout<<" Flight Name is not matched.";
    else
        cout<<"   Process Completed."<<endl;
}
void dele()
{ string tag;
cout<<"Enter seat number of the car to Delete Data:";
cin>>tag;
  int love,dove,shove,above=-1;




          for(love=0;love<50;love++)
          {

          if(tag==al[love].seat_num){
              dove=love;
              above=love;
          for(shove=dove;shove<50;shove++)
          {



          al[shove]=al[shove+1];

          }      }
          }

      if(above==-1)
        cout<<"seat number is not Matched.";
      else
  cout<<"............... Data Deleted ...............";
}
void update()
{ string a;
    char no;
    cout<<"a. Update Data by seat number.\n";
    cout<<"b. Update Data by  pasanger_name.\n";
    cout<<"c. Update Data by pasanger_name.\n";
    cout<<"Enter your choice:";
    cin>>no;
    switch(no)
    {

    case 'c':
         {  string Flight_name,route;
          int coun=-1;
        int i,price;
        char lo;
            cout<<"Enter pasanger_name:";
            cin>>a;
            for( i=0;i<50;i++){
            if(a==al[i].passanger_name)
            { coun--;
                cout<<"a. Update  Flight name.\n";
                cout<<"b. Update  Flight route.\n";
                cout<<"c. Update  pasanger_name.\n";
                cout<<"d. Update seat price.\n";

                cin>>lo;
                if(lo=='a')
                {
                   cout<<"Enter New  Flight name:";
                   cin>>Flight_name;
                   al[i].Flight_name=Flight_name;
                }
                else if(lo=='b')
                {
                    cout<<"Enter New  Flight Route:";
                   cin>>route;
                   al[i].root=route;
                }
                else if(lo=='c')
                {
                    cout<<"Enter New pasanger_name:";
                   cin>>new_passanger_name;
                   al[i].passanger_name=passanger_name;
                }
                else if(lo=='d')
                {
                    cout<<"Enter New seat price:";
                   cin>>price;
                   al[i].price=price;
                }
                else
                    cout<<"Invalid input."<<endl;
            }




        }
        if(coun==-1)
            cout<< "pasanger_name is not matched."<<endl;
        else
            cout<<"............Process Completed............\n";
        break;
    }
     case 'a':
         { string Flight_name,route;
        int i,price,coun=-1;
        char lo;
            cout<<"Enter seat Number:";
            cin>>a;
            for( i=0;i<50;i++){
            if(a==al[i].seat_num)
            {coun--;
                cout<<"a. Update  Flight name.\n";
                cout<<"b. Update  Flight route.\n";
                cout<<"c. Update  passanger name.\n";
                cout<<"d. Update seat price.\n";

                cin>>lo;
                if(lo=='a')
                {
                   cout<<"Enter New  Flight name:";
                   cin>>Flight_name;
                   al[i].Flight_name=Flight_name;
                }
                else if(lo=='b')
                {
                    cout<<"Enter New  Flight Route:";
                   cin>>route;
                   al[i].root=route;
                }
                else if(lo=='c')
                {
                    cout<<"Enter New  pasanger_name:";
                   cin>;
                   al[i].pasanger_name;
                }
                else if(lo=='d')
                {
                    cout<<"Enter New seat price:";
                   cin>>price;
                   al[i].price=price;
                }
                else
                    cout<<"Invalid input.";
            }




        }
        if(coun==-1)
            cout<<"seat Number is not matched."<<endl;
        else
            cout<<"............Process Completed............\n";
        break;
    }
     case 'b':
     	{
		 int i,price;
          string Flight_name,route;
          int coun=-1;

        char lo;
            cout<<"Enter   pasanger_name:";
            cin>>a;
            for( i=0;i<50;i++){
            if(a==al[i].Flight_name)
            { coun--;
                cout<<"a. Update Flight name.\n";
                cout<<"b. Update Flight route.\n";
                cout<<"c. Update pasanger_name.\n";
                cout<<"d. Update seat price.\n";

                cin>>lo;
                if(lo=='a')
                {
                   cout<<"Enter New pasanger name:";
                   cin>>Flight_name;
                   al[i].Flight_name=Flight_name;
                }
                else if(lo=='b')
                {
                    cout<<"Enter New route:";
                   cin>>route;
                   al[i].root=route;
                }
                else if(lo=='c')
                {
                    cout<<"Enter New passanger name:";
                   cin>;
                   al[i].pasanger_name;
                }
                else if(lo=='d')
                {
                    cout<<"Enter New seat price:";
                   cin>>price;
                   al[i].price=price;
                }
                else
                    cout<<"Invalid input.";
            }




        }
        if(coun==-1)
            cout<<" passanger name is not matched."<<endl;
        else
            cout<<"............Process Completed............\n";
        break;
    }
    default:{
    cout<<"Invalid Input.";
    break;}
}
}


int main()

{  system("color 7");
    cout<<"                    ______________________ "<<endl;
    cout<<"                   |.......................Welcome  M.A.S.T FLIGHTS-.......................| "<<endl;
    cout<<"                   |..........................luxury Travelling......................|"<<endl;
    cout<<"                   |______________________|"<<endl;
     cout<<"\n\n\n";
  cout<<"           Created By: M.A.S.T"<<endl;
  cout<<"           Submitted to: Amer Ahmad"<<endl;
  cout<<"              COMSATS universty"<<endl;




    system("color 7");
cout<<"\n\n\n                                Please wait Loading..............";
	cout<<"\n\n                   ";
for(int i=0;i<=60;i++){

Sleep(5);
system("color 9");
cout<<char(219);}
cout<<endl;
system("cls");
system("color 7");
int n;

    int i=0;
    char chl;

    do {
    cout<<"                                       Press 1 to Manage Data."<<endl;
    cout<<"                                       Press 2 to Search Data."<<endl;
    cout<<"                                       Press 3 to exit Program."<<endl;
    cout<<"                              Enter your choice:";
    cin>>n;
system("cls");
    switch(n)
    {
    case 1:
        {
            char a;
            cout<<"Enter a to add data.\n";
            cout<<"Enter b to update data.\n";
            cout<<"Enter c to delete data.\n";
            cout<<"Enter d to display data.\n";
            cout<<"Enter e to exit.\n";
            cout<<"Enter your choice:";
            cin>>a;
            system("cls");

            if(a=='a')

            { char l;
            for(i=0;i<50&&l!='n';i++){
                cout<<"                         Enter  passanger name:";
                cin>>al[i].Flight_name;
                cin.ignore();
                cout<<"                         Enter pasanger_name:";
                cin>>al[i].pasanger_name;

              cout<<"                         Enteter registration number:";
                cin>>al[i].nplate;

                cout<<"                         Enter route:";
                cin>>al[i].root;

                cout<<"                         Enter number:";
                cin>>al[i].seat_num;

                cout<<"                         Enter Flight-:";
                cin>>al[i].price;
                system("cls");



                cout<<"Do you want to add data again(y/n):";
                cin>>l;
                count++;
            }
            }
            else if(a=='b')
            {
                if(count==0)
                    cout<<"No data has been entered yet."<<endl;
                else
                    update();
            }
            else if (a=='c')
            {
                if(count==0)
                    cout<<"No Data has been entered yet."<<endl;
                else
                    dele();
            }
            else if(a=='d')
            {
                if(count==0)
                    cout<<"No Data has been entered yet."<<endl;
                else
                    fulldisplay();
            }
 cout<<"Want to use main menu again(y/n):";
 cin>>chl; break;}
    case 2:
        {
            int lab;
            cout<<"Press 1 to search by pasanger_name.";
            cout<<endl<<"Press 2 to search by ----."<<endl;
            cout<<"Press 3 to search by----."<<endl;
            cout<<"Press 4 to exit."<<endl;
            cout<<endl<<"Enter your choice:";
            cin>>lab; system("cls");
            if(lab==1)
            {

            if(count==0)
                cout<<"No Data has been entered yet."<<endl;
            else
                displayname();}
                else if(lab==2){
                        if(count==0)
                cout<<"No Data has been entered yet."<<endl;
                else
                    displayFlight_name();}
                else if (lab==3)
                {

                if(count==0)
                cout<<"No Data has been entered yet."<<endl;
                else
                    display();
                }
                else
                    break;
        }
        case 3:
        {
				exit(0);
        	break;
}
default:
	cout<<"Invalid Input.";

        }


        }


     while(chl!='n');


}

