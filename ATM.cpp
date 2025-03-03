#include<iostream>
using namespace std;
class ATM_App{
    public: void Welcome()
    {
        cout<<"Welcome to ATM.";

    }
    private:int pin;
    public: string Validate()
    {
        cout<<"\n Enter the pin";
        cin>>pin;
        if(pin ==123){
            return "True";

        }
        else{
            return "False";

        }
    }
    private:float wamt;
    public:float Withdraw(float bamt)
    {
        cout<<"\n Enter amount u want to withdraw";
        cin>>wamt;
        if(wamt>bamt)
        {
            cout<<"\n Insufficient Balance";

        }
        else{
            return bamt-wamt;
        }
    }
    public: void Display_Balance(float amt)
    {
        cout<<"\n Your Balance is"<<amt;
    }
};
int main()
{   
    ATM_App obj;
    string res;
    float res1;
    float amt1 =10000.50;
    obj.Welcome();
    res=obj.Validate();
    if(res=="True")
    {
        cout<<"\n Login successful";
        res1 = obj.Withdraw(amt1);
        obj.Display_Balance(res1);
    }
    else{
        cout<<"Validation unsuccessful";
    }





    return 0;
}
