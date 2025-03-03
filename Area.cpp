// Write a program to print the area of rectangle by creating a class names 'Area' having one function. Length and breadth of the rectangle are entered through keyboard using parametrized constructor.
#include<iostream>
using namespace std;
class Area{
    
    public:Area(float length,  float breadth)
    {
      
        cout<<"the area of rectangle is: "<<length*breadth;
    }
};
int main()
{
    float len, breadth;
    cout<<"Enter the len and breadth of rectangle: ";
    cin>>len>>breadth;
    Area obj(len,breadth);
    return 0;
}
