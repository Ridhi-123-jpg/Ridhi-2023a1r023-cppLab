// Write a program for employee management system a. create a class with name employee b. create a parametrized constructor to initialize class attributes like,employee name ,employee code, basic salary. c. create a member function Display() to display records on screen. d. create a function Gross_Salary which calculate components of salary like TA(3% of basic salary),DA(4% of basic salary),HRA(5% OF BASIC Salary),PF(4% of basic salary).e. create a function update() to increment basic salary of employees as:-gross salary between 10000 to 20000 ,10% increement gross salary between 20000 to 30000 ,15% increement gross salary above 30000,20% increment f. create a function Update_Profile(),if user wants to correct its nameor code. g. create a function with name Get_Data() that only reads employee data but not able to modify user data.
#include <iostream>
using namespace std;
class Employee
{
public:
    string employeename;
    int employee_code;
    int basic_salary;
    int gross_salary;

public:
    Employee(string EmployeeName, int Employee_code, int Basic_salary,int i)
    {
        employeename = EmployeeName;
        employee_code = Employee_code;
        basic_salary = Basic_salary;
        gross_salary=i;
    }

public:
    void Display()
    {
        cout << "\n EmployeeName: " << employeename << "\t Employee_code: " << employee_code << "\t Basic_salary: " << basic_salary << endl;
    }

public:
    float TA, DA, HRA, PF, i1;

public:
    void Gross_salary()
    {
        
        TA = 0.03 * basic_salary;
        DA = 0.04  * basic_salary;
        HRA = 0.05 * basic_salary;
        PF = 0.04 * basic_salary;
        i1 =basic_salary+ TA + DA + HRA - PF;
        cout<<"gross salary: "<<i1<<endl;
    }

public:
    float increement;

public:
    void Update()
    {
        
        if (i1> 10000 && i1< 20000)
        {
            cout<<"Incremented Salary " << i1+(0.1*i1);
        }
        else if (i1> 20000 && i1 < 30000)
        {
            cout<<"Incremented Salary " << i1+(0.15*i1);
        }
        else if (i1 > 30000)
        {
            cout<<"Incremented Salary " <<i1+( 0.2*i1);
        }
    }

};
int main()
{
    string employeename;
    int employee_code;
    int basic_salary;
    int gross_salary;
    cout<<"Enter the name of employee ";
    cin>>employeename;
    cout<<"Enter the employee code ";
    cin>>employee_code;
    cout<<"Enter the basic_salary ";
    cin>>basic_salary;
    Employee obj(employeename,employee_code,basic_salary,gross_salary);
    obj.Display();
    obj.Gross_salary();
    obj. Update();


    

}
