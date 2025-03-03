//program to create a class with name product_info with a function with name class Welcome_message() this function on exexution, will display a message on screen, "WELCOME TO MyStore"
#include<iostream>
using namespace std;
class Product_info
{
    public: void Welcome_message()
    {
        cout<<"Welcome To MyStore";
    }
};
int main()
{
    Product_info obj;
    obj.Welcome_message();
    return 0;
}


}
