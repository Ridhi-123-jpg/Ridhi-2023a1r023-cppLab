/*Example:- Hierarichical Inheritance
write a program to 
a. Create a base class with name Admin ,
b. define attributes like username="admin" and password=123
c.create function login(), this function will first vallidate username and password and then display info of the user.
d. create a function Guest_Login(),this function will allow user login for limited time and display only limited info like Welcome Message and 
current Login Location .
e. create a derived class 1 with name DBA ,
this class will extends Admin class attributes with login() function,
after successfull login
f. create a function Accept() to store user information
g. create a derived class 2 with name Guest,
this class will access Guest_Login() function from  Admin class and then store feedback message.*/
#include<iostream>
using namespace std;
class Admin{
    public: string username,company;
    int password;
    public: void Login()
    {
        cout<<"\n Enter the username: ";
        cin>>username;
        cout<<"\n Enter password: ";
        cin>>password;
        if(username=="admin" && password==123)
        {
            cout<<"\nWelcome "<<username<<" andpassword is"<<password;
        }
        else
        cout<<"\nInvalid Credentials";
    }
    void Guest_Login()
    {
        cout<<"\nWelcome\nCurrent Login Location: Jammu";
    }
};
class DBA: public Admin{
    protected:string information;
    public:void Accept()
    {
        if(username=="Admin" && password==123)
        {
            cout<<"\n Enter the name of company";
            cin>>company;
            cout<<"\n Enter your position in the company";
            cin>>information;
            cout<<"\nWelcome: "<<username<<",of the company: "<<company<<" and your position is : "<<information;
        }
    }
};
class Guest: public Admin
{
    public: void Feedback()
    {
        Guest_Login();
        cout<<"\n Feedback Message";

    }

};
int main()
{
    DBA obj;
    obj.Login();
    obj.Accept();
    Guest obj1;
    obj1.Feedback();
}
