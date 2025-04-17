/*Basic example of Dynamic Polymorphism.
Function overriding :- Overriding Base class */
#include<iostream>
using namespace std;
class Base{
    public: Base()
    {
        cout<<"\n Base class constructor";
    }
    public:~Base(){
        cout<<"\n Base class destructor";
    }
     virtual void Fun1(){//we create base class function as virtual function here to 
        //this function override at run time , this will tell compiler that this function is overrride 
        cout<<"\n Base class function";

    }
};
class Derived: public Base{
    public: Derived()
    {
        cout<<"\n Derived class constructor";
    }
    public:~Derived()
    {
        cout<<"\n Derived class destructor";
    }
    void Fun1()override{//Must have same return type and parameter (overriding base class)
        //override keyboard
        cout<<"\n Derived class function";
    }
};
int main()
{
    Derived obj;//creating derived class obj
    obj.Fun1();
    //for the output of base class we use scope resolution and remove the virtual and override function . 
    //This 
    //obj.Base::Fun1();
    return 0;
}
