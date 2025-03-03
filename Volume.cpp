// C++ program to calculate volume of cube using parameterized constructor.
   #include<iostream>
   using namespace std;
   class Volume{
    public:Volume(int side)
    {
        cout<<"The volume of cube is: "<<side*side*side;
    }
   };
   int main()
   {
    int side;
    cout<<"Enter the value od side: ";
    cin>>side;
    Volume obj(side);
   }
