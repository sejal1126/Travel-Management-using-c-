#include<iostream>
#include<bits/stdc++.h>
#include<windows.h>
#include<iomanip>
using namespace std;
class signup
{public:
   static string username,password;
   void get_signup()
   {
     cout<<"Enter username\t:\t";cin>>username;
     cout<<"Enter password\t:\t";cin>>password;
   }

};
class bank
{public:
    string fname,lname;
    static int empId;
    int age,empID1;
    char gender;
    string pnum;

    void enter_details();
    void show_details();
    void update_details();
    void delete_details();
    void search_details();

};

void bank :: enter_details()
{system("CLS");
   cout<<"\n\n\t\tENTERING DETAILS\n";
   cout<<"Enter First Name    \t:\t";cin>>fname;
   cout<<"Enter Last Name     \t:\t";cin>>lname;
   cout<<"Enter EmployId      \t:\t";cin>>empId;
   cout<<"Enter Age           \t:\t";cin>>age;
   cout<<"Enter Gender(M/F)   \t:\t";cin>>gender;
   cout<<"Enter Phone Number  \t:\t";cin>>pnum;
}
void bank::show_details()
{system("CLS");
    cout<<"\n\n\n SHOWING DETAILS\n";
    cout<<"\nFirst Name    \t:\t";cout<<fname;
    cout<<"\nLast Name     \t:\t";cout<<lname;
    cout<<"\nEmployId      \t:\t";cout<<empId;
    cout<<"\nAge           \t:\t";cout<<age;
    cout<<"\nGender(M/F)   \t:\t";cout<<gender;
    cout<<"\nPhone Number  \t:\t";cout<<pnum;
    cout<<"\n";
}
int bank ::empId;
void bank::search_details()
{
    cout<<"\n\n\n SEARCHING DETAILS\n";
    Sleep(1000);
    int empID1=0;
    cout<<"Enter the Employee Id\t:\t";cin>>empID1;


    if(empID1==bank::empId)
    { cout<<"Your record Found\n";
        show_details();
    }
    else
    {
        cout<<"Incorrect Employess Id";
        cout<<"\nRedirecting you to searching \n";
          Sleep(2000);
        system("CLS");
        search_details();

    }
}
//int bank ::empId;
void bank::delete_details()
{cout<<"\n\n\n DELETING DETAILS\n";
    Sleep(1000);
    int empID1=0;
    cout<<"Enter the Employee Id\t:\t";cin>>empID1;
    if(empID1==bank::empId)
        cout<<"Record Deleted Successfully\n";

}
void bank ::update_details()
{int empID1=0;
    system("CLS");
    cout<<"\n\n\n Updating Details\n";

    cout<<"Enter the Employee Id\t:\t";cin>>empID1;
    if(empID1==bank ::empId)
    { cout<<"Your record Found\n";
      cout<<"Please Update\n";
        enter_details();
        cout<<"\n\n\n \t\t\t UPDATE RECORD\n\n";
        show_details();
    }
    else
    {
        cout<<"Incorrect Employess Id";
        cout<<"\nRedirecting you to searching \n";
        Sleep(2000);
        system("CLS");
        update_details();

    }

}
string signup::password;
string signup::username;
class login:public signup,bank{
public:
    string us1,ps1;
    char a;
  void get_login()
  {   system("CLS");
      cout<<"\n\n\n LOGIN PAGE\n";
      cout<<"Enter the username\t:\t";cin>>us1;
      cout<<"Enter the password\t:\t";cin>>ps1;

      if(us1==signup::username &&ps1 ==signup::password)
      {
          cout<<"Login Successful"<<endl;
          Sleep(1000);
          do{
          system("CLS");
          cout<<"1..Enter the details\n";
          cout<<"2..Show Details\n";
          cout<<"3..Search Details\n";
          cout<<"4..Update Details\n";
          cout<<"5..Delete Details\n";
          cout<<"6..Logout\n";
          cout<<"7..Exit\n";
          int ch=0;
          cout<<"\n Enter Your Choice\t:\t";cin>>ch;
          if(ch==1)
          {
              enter_details();
          }
          else if(ch==2)
          {
              show_details();
          }
          else if(ch==3)
          {

              search_details();
          }
          else if(ch==4)
          {

              update_details();
          }
          else if(ch==5)
          {
              delete_details();
          }
          else if(ch==6)
          {
              get_login();
          }
          else if(ch==7)
          {
              exit(1);
          }

          cout<<"\nDo you want to do again (y/n)\t:\t";cin>>a;}while(a=='y'||a=='Y');
      }
      else if(us1!=signup::username)
      {
          cout<<"Incorrect Username"<<endl;

          cout<<"Try again\n";
           Sleep(999);
           system("CLS");
           get_login();

      }
      else if(ps1== signup::password)
      {
          cout<<"Incorrect Password"<<endl;
           cout<<"Try again\n";
           Sleep(999);
           system("CLS");
           get_login();
      }
  }

};


int main()
{
signup sg;
login lg;
char c;
do{

cout<<"\n\n \t\t\tEmploy Management System\n";
cout<<"1..Sign up\n";
cout<<"2..Login\n";
cout<<"3..Exit\n";
int ch=0;
cout<<"Enter Your choice\t:\t";cin>>ch;
if(ch==1)
{
    system("CLS");
    cout<<"\n\n\n\t\t SIGN UP\n\n";
    sg.get_signup();
}
else if(ch==2)
{    system("CLS");
    cout<<"\n\n\n\t\t LOGIN UP\n\n";
     lg.get_login();

}

else{
    exit(1);
}
cout<<"Do you want to do again(y/n)\t:\t";cin>>c;
system("CLS");
}while(c=='Y'||c=='y');
system("CLS");

return 0;
}
