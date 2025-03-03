 // Wap to display addition, subtraction, multiplication and division of two integers on screen. Declare class Calculation Write parametrzed constructor for initialze num 1 and num 2 wite member function for each operation.
   #include<iostream>
   using namespace std;
   class Calculation{

    public: int Addition(int num1,int num2 )
    {
        cout<<"The sum of two number is:  "<<num1+num2;
    }
    public: int subtraction(int num1 , int num2)
    {
        cout<<"The difference of two number is: "<<num1-num2;

    }
    public: int multiplication(int num1 , int num2)
    {
        cout<<"The product of two number is: "<<num1*num2;

    }
    public: int division(int num1, int num2)
    {
        cout<<"The division of two number is: "<<num1/num2;

    }
    public:Calculation(int num1 , int num2){
    num1=n1;
    num2=n2;
        Addition();
        subtraction();
        multiplication();
        division();
    }
   }; 
   int main()
   {
    int num1, num2;
    cout<<"Enter the value of num1 and num2: ";
    cin>>num1>>num2;
    Calculation obj(num1,num2);
   } 
    
