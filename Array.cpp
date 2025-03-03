/*Program to demonstrate implementation of array using direct initialization method
#include <iostream>
using namespace std;
class program
{
private:
    int adv[5] = {1, 2, 3, 4, 5}; // Declaration and direct initialization
    int weak[5] = {6, 7, 55, 88, 9};
    int i;

public:
    void Display()
    {
        cout << "List of advance learners \t ";
        for (i = 0; i < 5; i++)
        {
            cout << adv[i] << "\t";
        }
        cout << "\n List of weak learners \t ";
        for (i = 0; i < 5; i++)
        {
            cout << weak[i] << "\t";
        }
    }
};
int main()
{
    program obj;
    obj.Display();
    return 0;
}
