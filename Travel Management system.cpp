#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
#include<windows.h>
#include<fstream>
using namespace std;
void menu();
class ManageMenu
{
protected:
    string userName; //hide admin name

public:

    //virtual void menu(){}

    ManageMenu()
    {
        system("color 0A"); //change terminal color
        cout << "\n\n\n\n\n\n\n\n\n\t  Enter Your Name to Continue as an Admin: ";
        cin >> userName;
        system("CLS");
        menu(); //call to main function to load after executing the constructr
    }

    ~ManageMenu(){} //de
};
class customer
{public:
    string name,add,email;
    char gender;
    static int custID;
    int phonenumber,age;
    char ans[999];

    void getDetails()
    {
        ofstream out("old-details.txt",ios::app);
    {


           cout<<"Enter the Customer Id\t:\t";
           cin>>custID;
           cout<<"Enter the Customer Name\t:\t";
           cin>>name;
           cout<<"Enter the Customer address\t:\t";
           cin>>add;
           cout<<"Enter the Customer Phone Number\t:\t";
           cin>>phonenumber;
           cout<<"Enter the Customer gender (M/F)\t:\t";
           cin>>gender;
           cout<<"Enter the Customer age\t:\t";
           cin>>age;

    }
    out<<"\n Customer Id :"<<custID<<"\nName\t:\t"<<name<<"\nAddress\t:\t"<<add<<"\n Mobile Number\t:\t"<<phonenumber<<"\n Gender \t:\t"<<gender<<"\n Age\t:\t"<<age;
    out.close();
    cout<<"\n SAVED...\n Note : We Saved your record for future purpose..\n";

    }


    void showDetails()
    {
       ifstream in("old-details.txt");
       if(!in)
       {
           cout<<"File Error\n";
       }
       while(!(in.eof()))
       {  in.getline(ans,999);
       cout<<ans<<endl;

       }
       in.close();

    }

};

int customer::custID;
class cab {
public:
    int cabchoice=0,kilometer=0,cabcost,hirecab=0;
    static float lastcabcost;
    void cabDetails()
    {
         cout << "We collaborated with fastest, safest, and smartest cab service arround the country" << endl;
        cout << "-----------ABC Cabs-----------\n" << endl;
        cout << "1. Rent a Standard Cab - Rs.15 for 1KM" << endl;
        cout << "2. Rent a Luxury Cab - Rs.25 per 1KM" << endl;

        cout<<"Enter your cab choice\t:\t";cin>>cabchoice;
        cout<<"Enter the kilometer you need to travel\t:\t";cin>>kilometer;
        if(cabchoice==1)
        {
            cabcost=15*kilometer;
            cout<<"Cost of Standard Cab is \t:\t"<<cabcost<<"in rupees"<<endl;
            cout<<"Do you want to hire this cab\n Press 1: Hire the cab\nPress 2:Another cab to hire\n";
            cout<<"Enter your choice";cin>>hirecab;
            if(hirecab==1)
            {
                lastcabcost=cabcost;
                cout<<"You have hired the cab successfully\n";

            }
            else if(hirecab==2)
            {
                cout<<"You want to hire another cab\n";
                cabDetails();
            }
            else{
                cout<<"Your choice is invalid\n";
                Sleep(1100);
                system("CLS");
                cout<<"Directing you to main menu...\n";
                Sleep(1100);
                system("CLS");
                cabDetails();

            }
        }

       else if(cabchoice==2)
        {
            cabcost=25*kilometer;
            cout<<"Cost of Luxury Cab is \t:\t"<<cabcost<<"in rupees"<<endl;
            cout<<"Do you want to hire this cab\n Press 1: Hire the cab\nPress 2:Another cab to hire\n";
            cout<<"Enter your choice";cin>>hirecab;
            if(hirecab==1)
            {
                lastcabcost=cabcost;
                cout<<"You have hired the cab successfully\n";

            }
            else if(hirecab==2)
            {
                cout<<"You want to hire another cab\n";
                cabDetails();
            }
            else{
                cout<<"Your choice is invalid\n";
                Sleep(1100);
                system("CLS");
                cout<<"Directing you to main menu...\n";
                Sleep(1100);
                system("CLS");
                cabDetails();

            }
        }
         else
         {
             cout<<"Invalid Input!! Redirecting to Main Menu\n";

             system("CLS");
             menu();
         }

         cout<<"\nPress 1: To return to menu()";
         cin>>hirecab;
         if(hirecab==1)
         {
             menu();
         }
         else{
            menu();
         }
    }
};


float cab::lastcabcost;
class charges{
public:

    static float hotelCost;
    int packcost=0,hotelchoice=0,packChoice=0,gotomenu=0;
        void hotels()
     {
     string hotelNo[] = {"Avendra", "ChoiceYou", "ElephantBay"};
        for(int a = 0; a < 3; a++)
        {
            cout << (a+1) <<". Hotel " << hotelNo[a] << endl;
        }
      cout << "\nCurrently we collaborated with above hotels!" << endl;
     cout<<"Press the number of hotel whom you want to choose\t:\t";
     cin>>hotelchoice;
     system("CLS");
     if(hotelchoice==1)
     {cout << "-------WELCOME TO HOTEL AVENDRA-------\n" << endl;

            cout << "The Garden, food and beverage. Enjoy all you can drink, Stay cool and get chilled in the summer sun." << endl;

            cout << "Packages offered by Avendra:\n" << endl;

            cout << "1. Standard Pack" << endl;
            cout << "\tAll basic facilities you need just for: Rs.5000.00" << endl;
            cout << "2. Premium Pack" << endl;
            cout << "\tEnjoy Premium: Rs.10000.00" << endl;
            cout << "3. Luxury Pack" << endl;
            cout << "\tLive a Luxury at Avendra: Rs.15000.00" << endl;

            cout<<"Choose your Package\t:\t";
             if(packChoice==1)
             {hotelCost=5000;
                 cout << "\nYou have successfully booked Standard Pack at Avendra" << endl;
                 cout << "Goto Menu and take the receipt" << endl;
             }
             else if(packChoice==2)
             {hotelCost=10000;
                cout << "\nYou have successfully booked Standard Pack at Avendra" << endl;
                cout << "Goto Menu and take the receipt" << endl;
             }
             else if(packChoice==3)
             {
                 hotelCost=15000;
                 cout << "\nYou have successfully booked Standard Pack at Avendra" << endl;
                 cout << "Goto Menu and take the receipt" << endl;
             }
             else
             {
                 cout<<"Invalid choice!!";
                 Sleep(1100);
                 system("CLS");
                 hotels();
             }
        int gotoMenu=0;
         cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
     }
        if(hotelchoice==2)
        {
            cout << "-------WELCOME TO HOTEL CHOICEYOU-------\n" << endl;

            cout << "Swimming Pool | Free WiFi | Family Rooms \n Fitness Center | Restaurant & Bar" << endl;

            cout << "Packages Offered by ChoiceYou:\n" << endl;

            cout << "1. Family Pack" << endl;
            cout << "\t Rs.15000.00 for a day" << endl;
            cout << "2. Couple Pack" << endl;
            cout << "\t Rs.10000.00 for a day" << endl;
            cout << "3. Single Pack" << endl;
            cout << "\t 5000.00 for a day" << endl;

            cout << "\nPress another key to back or\nEnter Package number you want to book: ";
            cin >> packChoice;

            if (packChoice == 1){
                hotelCost = 15000.00;
                cout << "You have successfully booked Family Pack at ChoiceYou" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice == 2){
                hotelCost = 10000.00;
                cout << "You have successfully booked Couple Pack at ChoiceYou" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else if (packChoice == 3){
                hotelCost = 5000.00;
                cout << "You have successfully booked Single Pack at ChoiceYou" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
             int gotoMenu=0;
            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }

        if(hotelchoice==3)
        {
            cout << "-------WELCOME TO HOTEL ELEPHANTBAY-------\n" << endl;
            cout << "Set in tropical gardens on the banks of the Maha Oya river While Seeing Elephants" << endl;
            cout << "Amazing offer in this summer: Rs.5000.00 for a one day!!!" << endl;

            cout << "\nPress another key to back or\nPress 1 to book this special package: ";
            cin >> packChoice;

            if (packChoice == 1){
                hotelCost = 5000.00;
                cout << "You have successfully booked ElephantBay Special Pack" << endl;
                cout << "Goto Menu and take the receipt" << endl;
            }
            else{
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotoMenu=0;
            cout << "\nPress 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
           menu();
        }

        }

};

float charges::hotelCost;

class billings: public customer,cab,charges{
public:
    char all[999];

    void printBill()
    {
        ofstream outf("receipt.txt"); //receipt for bought items
        {
            outf << "--------ABC Travel Agency--------" << endl;
            outf << "-------------Receipt-------------" << endl;
            outf << "_________________________________" << endl;

            outf << "Customer ID: " << customer::custID << endl << endl;
            outf << "Description\t\t Total" << endl;
            outf << "Hotel cost:\t\t " << fixed << setprecision(2) << charges::hotelCost << endl;
            outf << "Travel (cab) cost:\t " << fixed << setprecision(2) << cab::lastcabcost<< endl;

            outf << "_________________________________" << endl;
            outf << "Total Charge:\t\t " << fixed << setprecision(2) << charges::hotelCost+cab::lastcabcost<< endl;
            outf << "_________________________________" << endl;
            outf << "------------THANK YOU------------" << endl;
        }
        outf.close();
        //cout << "Your receipt printed, please get it from the file saved path:D" << endl;
    }

    void showBill()
    {
        ifstream inf("receipt.txt");
        {
            if(!inf)
            {
                cout << "File Error!" << endl;
            }
            while(!(inf.eof()))
            {
                inf.getline(all, 999);
                cout << all << endl;
            }
        }
        inf.close();
    }
};

void menu() //menu function contain main menu
{

    int mainChoice;
    int inChoice;
    int gotoMenu;
    cout << "\t\t      * ABC Travels *\n" << endl;
    cout << "-------------------------Main Menu--------------------------" << endl;

    cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    //cout << "\t|\tAgency System Management -> 0" << endl;
    cout << "\t|\tCustomer Management -> 1\t|" << endl;
    cout << "\t|\tCabs Management     -> 2\t|" << endl;
    cout << "\t|\tBookings Management -> 3\t|" << endl;
    cout << "\t|\tCharges & Bill      -> 4\t|" << endl;
    cout << "\t|\tExit                -> 5\t|" << endl;
    cout << "\t|\t\t\t\t\t|" << endl;
    cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl;

    cout << "\nEnter Choice: ";
    cin >> mainChoice;

    system("CLS");

    customer a2; //creating objects
    cab a3;
    charges a4;
    billings a5;

    /*if(mainChoice == 0){
    }*/
    if(mainChoice == 1){
        cout << "------Customers------\n" << endl;
        cout << "1. Enter New Customer"<< endl;
        cout << "2. See Old Customers"<< endl;

        cout << "\nEnter choice: ";
        cin >> inChoice;

        system("CLS");
        if(inChoice == 1){
            a2.getDetails();
        }
        else if(inChoice == 2){
            a2.showDetails();
        }
        else{
            cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
        cout << "Press 1 to Redirect Main Menu: ";
        cin >> gotoMenu;
        system("CLS");
        if(gotoMenu == 1){
            menu();
        }
        else{
            menu();
        }
    }
    else if(mainChoice == 2){
        a3.cabDetails();
    }
    else if(mainChoice == 3){
        cout << "--> Book a Luxury Hotel using the System <--\n" << endl;
        a4.hotels();
    }
    else if(mainChoice == 4){
        cout << "-->Get your receipt<--\n" << endl;
        a5.printBill();
        cout << "Your receipt is already printed you can get it from file path\n" << endl;
        cout << "to display the your receipt in the screen, Enter 1: or Enter another key to back main menu: ";
        cin >> gotoMenu;
        if(gotoMenu == 1){
            system("CLS");
            a5.showBill();
            cout << "Press 1 to Redirect Main Menu: ";
            cin >> gotoMenu;
            system("CLS");
            if(gotoMenu == 1){
                menu();
            }
            else{
                menu();
            }
        }
        else{
            system("CLS");
            menu();
        }
    }
    else if(mainChoice == 5){
        cout << "\n\n\t--GOOD-BYE!--" << endl;
        Sleep(1100);
        system("CLS");
        ManageMenu();
    }
    else{
        cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
        Sleep(1100);
        system("CLS");
        menu();
    }
}
int main()
{ManageMenu startObj;
return 0;
}
