#include<iostream>
#include<cstring>
#include<conio.h>
#include<windows.h>
#include<ios>
#include<limits>
using namespace std;
struct record
{
    string passanger_name,flight_name,flight_number,seat_number,route;
    int seat_price;


};
int count=0;
record al[50];
void display()
{ string cat;
int t=0;
    cout<<"Enter the flight number to display Data:";
    cin>>cat;
    for(int i=0;i<50;i++)
    {
        if(cat==al[i].flight_number)
        {
            t++;
            cout<<"Flight name is: "<<al[i].flight_name<<endl;
            cout<<"passanger name is: "<<al[i].passanger_name<<endl;
            cout<<"passanger seat Number is: "<<al[i].seat_number<<endl;
            cout<<"Current route of flight is: "<<al[i].route<<endl;
            cout<<"flight number is: "<<al[i].flight_number<<endl;
            cout<<"seat price of flight is: "<<al[i].seat_price<<endl;

            break;
        }
    }
    if(t==0)
        cout<<"flight number is not matched."<<endl;
    else
        cout<<"   Process Completed."<<endl;
}
void fulldisplay()
{


    for(int i=0;i<count;i++)
    {



            cout<<"Flight name is: "<<al[i].flight_name<<endl;
            cout<<"passanger name is: "<<al[i].passanger_name<<endl;
            cout<<"passanger seat Number is: "<<al[i].seat_number<<endl;
            cout<<"Current route of flight is: "<<al[i].route<<endl;
            cout<<"flight number is: "<<al[i].flight_number<<endl;
            cout<<"seat price of flight is: "<<al[i].seat_price<<endl;



    }

        cout<<"   Process Completed."<<endl;
}
void displaypassanger_name()
{ string cat;
int t=0;
    cout<<"Enter the passanger_name to display Data: ";
    cin>>cat;
    for(int i=0;i<50;i++)
    {
        if(cat==al[i].passanger_name)
        {
            t++;
            cout<<"Flight name is: "<<al[i].flight_name<<endl;
            cout<<"passanger name is: "<<al[i].passanger_name<<endl;
            cout<<"passanger seat Number is: "<<al[i].seat_number<<endl;
            cout<<"Current route of flight is: "<<al[i].route<<endl;
            cout<<"flight number is: "<<al[i].flight_number<<endl;
            cout<<"seat price of flight is: "<<al[i].seat_price<<endl;

            break;
        }
    }
    if(t==0)
        cout<<"passanger_name is not matched."<<endl;
    else
        cout<<"   Process Completed."<<endl;
}
void displayflight_name()
{ string cat;
int t=0;
    cout<<"Enter the Flight name to display Data: ";
    cin>>cat;
    for(int i=0;i<50;i++)
    {
        if(cat==al[i].flight_name)
        {
            cout<<"Flight name is:  "<<al[i].flight_name<<endl;
            cout<<"passanger name is:  "<<al[i].passanger_name<<endl;
            cout<<"passanger seat Number is:  "<<al[i].seat_number<<endl;
            cout<<"Current route of flight is:  "<<al[i].route<<endl;
            cout<<"flight number is:  "<<al[i].flight_number<<endl;
            cout<<"seat price of flight is:  "<<al[i].seat_price<<endl;
            t++;
            break;
        }
    }
    if(t==0)
        cout<<"Flight name is not matched.";
    else
        cout<<"   Process Completed."<<endl;
}
void dele()
{ string tag;
cout<<"Enter flight number of the car to Delete Data: ";
cin>>tag;
  int love,dove,shove,above=-1;




          for(love=0;love<50;love++)
          {

          if(tag==al[love].flight_number){
              dove=love;
              above=love;
          for(shove=dove;shove<50;shove++)
          {



          al[shove]=al[shove+1];

          }      }
          }

      if(above==-1)
        cout<<"flight number is not Matched.";
      else
  cout<<"............... Data Deleted ...............";
}
void update()
{ string a;
    char no;
    cout<<"a. Update Data by flight number.\n";
    cout<<"b. Update Data by Flight name.\n";
    cout<<"c. Update Data by Passanger name.\n";
    cout<<"Enter your choice: ";
    cin>>no;
    switch(no)
    {

    case 'c':
         {  string flight_name,route,passanger_name;
          int coun=-1;
        int i,seat_price;
        char lo;
            cout<<"Enter Passanger name: ";
            cin>>a;
            for( i=0;i<50;i++){
            if(a==al[i].passanger_name)
            { coun--;
                cout<<"a. Update Flight name.\n";
                cout<<"b. Update Car route.\n";
                cout<<"c. Update passanger name.\n";
                cout<<"d. Update flight seat_price.\n";

                cin>>lo;
                if(lo=='a')
                {
                   cout<<"Enter New Flight name: ";
                   cin>>flight_name;
                   al[i].flight_name=flight_name;
                }
                else if(lo=='b')
                {
                    cout<<"Enter Flight new route: ";
                   cin>>route;
                   al[i].route=route;
                }
                else if(lo=='c')
                {
                    cout<<"Enter New passanger name: ";
                   cin>>passanger_name;
                   al[i].passanger_name=passanger_name;
                }
                else if(lo=='d')
                {
                    cout<<"Enter New flight seat_price: ";
                   cin>>seat_price;
                   al[i].seat_price=seat_price;
                }
                else
                    cout<<"Invalid input."<<endl;
            }




        }
        if(coun==-1)
            cout<<"Passanger name is not matched."<<endl;
        else
            cout<<"............Process Completed............\n";
        break;
    }
     case 'a':
         { string flight_name,route,passanger_name;
        int i,seat_price,coun=-1;
        char lo;
            cout<<"Enter flight Number: ";
            cin>>a;
            for( i=0;i<50;i++){
            if(a==al[i].flight_number)
            {coun--;
                cout<<"a. Update Flight name.\n";
                cout<<"b. Update flight route.\n";
                cout<<"c. Update passanger name.\n";
                cout<<"d. Update flight seat_price.\n";

                cin>>lo;
                if(lo=='a')
                {
                   cout<<"Enter New Flight name: ";
                   cin>>flight_name;
                   al[i].flight_name=flight_name;
                }
                else if(lo=='b')
                {
                    cout<<"Enter Flight new route: ";
                   cin>>route;
                   al[i].route=route;
                }
                else if(lo=='c')
                {
                    cout<<"Enter New passanger name: ";
                   cin>>passanger_name;
                   al[i].passanger_name=passanger_name;
                }
                else if(lo=='d')
                {
                    cout<<"Enter New flight seat_price: ";
                   cin>>seat_price;
                   al[i].seat_price=seat_price;
                }
                else
                    cout<<"Invalid input.";
            }




        }
        if(coun==-1)
            cout<<"flight Number is not matched."<<endl;
        else
            cout<<"............Process Completed............\n";
        break;
    }
     case 'b':
     	{
		 int i,seat_price;
          string flight_name,route,passanger_name;
          int coun=-1;

        char lo;
            cout<<"Enter Flight name: ";
            cin>>a;
            for( i=0;i<50;i++){
            if(a==al[i].flight_name)
            { coun--;
                cout<<"a. Update passanger_name.\n";
                cout<<"b. Update Flight route.\n";
                cout<<"c. Update  Passanger name.\n";
                cout<<"d. Update Flight seat_price.\n";

                cin>>lo;
                if(lo=='a')
                {
                   cout<<"Enter New flight name: ";
                   cin>>flight_name;
                   al[i].flight_name=flight_name;
                }
                else if(lo=='b')
                {
                    cout<<"Enter New Flight route:";
                   cin>>route;
                   al[i].route=route;
                }
                else if(lo=='c')
                {
                    cout<<"Enter New Passanger name:";
                   cin>>passanger_name;
                   al[i].passanger_name=passanger_name;
                }
                else if(lo=='d')
                {
                    cout<<"Enter New Flight seat_price:  ";
                   cin>>seat_price;
                   al[i].seat_price=seat_price;
                }
                else
                    cout<<"Invalid input.";
            }




        }
        if(coun==-1)
            cout<<"Flight name is not matched."<<endl;
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
    cout<<"                    ______________________________________________________________________ "<<endl;
    cout<<"                   |.......................Welcome  M.A.S.T Flights.......................| "<<endl;
    cout<<"                   |...........................luxury Travelling..........................|"<<endl;
    cout<<"                   |______________________________________________________________________|"<<endl;
     cout<<"\n\n\n";
  cout<<"           Created By: Mohsin haider \n Tania shokat \n Ayesha Mubeen \n M.shohaib Amjad"<<endl;
  cout<<"           Submitted to: Amer Ahmad"<<endl;
  cout<<"           COMSATS universty Sahiwal"<<endl;




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
    cout<<"                                       Press 1 to Enter Data."<<endl;
    cout<<"                                       Press 2 to Search Data."<<endl;
    cout<<"                                       Press 3 to exit Program."<<endl;
    cout<<"                              Enter your choice: ";
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
            cout<<"Enter your choice: ";
            cin>>a;
            system("cls");

            if(a=='a')

            { char l;
            for(i=0;i<50&&l!='n';i++){
                cout<<"                         Enter Flight name: ";
                cin>>al[i].flight_name;
                cin.ignore();

                 cout<<"                         Enter flight registration number: ";
                cin>>al[i].seat_number;

                cout<<"                         Enter passanger_name: ";
                cin>>al[i].passanger_name;

                cout<<"                         Enter seat price: ";
                cin>>al[i].seat_price;

                cout<<"                         Enter flight route: ";
                cin>>al[i].route;

                cout<<"                         Enter passanger seat number: ";
                cin>>al[i].flight_number;

                
                system("cls");



                cout<<"Do you want to add data again(y/n): ";
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
 cout<<"Want to use main menu again(y/n): ";
 cin>>chl; break;}
    case 2:
        {
            int lab;
            cout<<"Press 1 to search by passanger_name: ";
            cout<<endl<<"Press 2 to search by flight name: "<<endl;
            cout<<"Press 3 to search by flight Number: "<<endl;
            cout<<"Press 4 to exit."<<endl;
            cout<<endl<<"Enter your choice: ";
            cin>>lab; system("cls");
            if(lab==1)
            {

            if(count==0)
                cout<<"No Data has been entered yet."<<endl;
            else
                displaypassanger_name();}
                else if(lab==2){
                        if(count==0)
                cout<<"No Data has been entered yet."<<endl;
                else
                    displayflight_name();}
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

