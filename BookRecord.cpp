//Program to demonstrate working of array of object
   #include<iostream>
   using namespace std;
   class Books_Records
   {
    private: int BookNo;
    string Bookname;
    public: Books_Records(int B ,string N ){
        BookNo = B;
        Bookname = N;
    }
    public: void Display()
    {
        cout<<"\n Book Number is "<<BookNo<<" Book Name is "<<Bookname;
    }
   };
   int main()
   {
    Books_Records obj[5] ={{1,"CPP"},{2,"Java"},{3,"C"},{4,"C#"},{5,"PHP"}};
    int i;
    for(i=0;i<5;i++){
        obj[i].Display();
        
    }return 0;
   }
