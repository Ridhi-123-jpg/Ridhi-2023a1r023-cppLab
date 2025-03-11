// Structures - Student Details: Create a structure for storing student details (name, roll number, marks) and display the details.
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int rollno;
    int marks;

public:
    void Details(string Name, int Rollno, int Marks)
    {
        name = Name;
        rollno = Rollno;
        marks = Marks;
    }

public:
    void Display()
    {
        cout << "\n Name " << name << "\n Rollno " << rollno << "\n Marks " << marks << endl;
    }
};
int main()
{

    Student obj;

    string name;
    int rollno;
    int marks;

    cout << "Enter the name ";
    cin >> name;
    cout << "Enter the rollno ";
    cin >> rollno;
    cout << "Enter the marks ";
    cin >> marks;
    obj.Details(name, rollno, marks);
    obj.Display();
    return 0;
}
