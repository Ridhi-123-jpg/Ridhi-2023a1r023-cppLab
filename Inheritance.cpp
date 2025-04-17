/*Exp :-7a To implement inheritance for a UG Course class, PG course class and Diploma Course class.using multilevel inheritance
Write a program to
a.create a base class with name UG course class,
b.create a function with name SubjectList(), here in this function display a list of subjects and ask user tto select a choice from given list.
c. create a function with name MarksObtained() , here in this function ask user to enter marks obtained in the selected course.
d. create a derived class with name Pg Course class,
e. create a function with name Specialization(), here in this function display a list of subjects and ask user to select  a choice from given list.
f. create a function with name MarksObtained() , here in this function ask user to enter marks obtained in selected course.
d. create a derived class with name diploma course class,
e. create a function with name CourseList(), here in this function display a list of subjects
and ask user to select a choice from given list.
f. create a function with name MarksObtained() , here in this function ask user to enter marks obtained in selected course.
g.create a derived class with name Result class,
h. create a function with name SelectionCriteria(),here in this function display a selection criteria for the post.
1. Post 1: Software Developer:
5 Points for percentage more than 80 percent in UG
5 points for percentage more than 80 percent in PG
5 points for percentage more than 80 percent in diploma
i.create a function with FinalResult() , candidates scored more than 12 points are qualified for post.*/
#include <iostream>
#include <string>
using namespace std;

class UGCourse
{
protected:
    string ugSubject;
    float ugMarks;

public:
    void SubjectList()
    {
        cout << "UG Subjects:\n1. Maths\n2. Physics\n3. Chemistry\n";
        int choice;
        cout << "Select a subject (1-3): ";
        cin >> choice;
        string subjects[] = {"Maths", "Physics", "Chemistry"};
        if (choice >= 1 && choice <= 3)
        {
            ugSubject = subjects[choice - 1];
            cout << "Selected UG Subject: " << ugSubject << endl;
        }
        else
        {
            cout << "Invalid choice\n";
        }
    }

    void EnterUGMarks()
    {
        cout << "Enter UG marks (out of 100): ";
        cin >> ugMarks;
    }
};

class PGCourse : public UGCourse
{
protected:
    string pgSubject;
    float pgMarks;

public:
    void Specialization()
    {
        cout << "PG Specializations:\n1. Data Science\n2. AI\n3. Cyber Security\n";
        int choice;
        cout << "Select a specialization (1-3): ";
        cin >> choice;
        string specs[] = {"Data Science", "AI", "Cyber Security"};
        if (choice >= 1 && choice <= 3)
        {
            pgSubject = specs[choice - 1];
            cout << "Selected PG Specialization: " << pgSubject << endl;
        }
        else
        {
            cout << "Invalid choice\n";
        }
    }

    void EnterPGMarks()
    {
        cout << "Enter PG marks (out of 100): ";
        cin >> pgMarks;
    }
};

class DiplomaCourse : public PGCourse
{
protected:
    string diplomaSubject;
    float diplomaMarks;

public:
    void CourseList()
    {
        cout << "Diploma Courses:\n1. Web Development\n2. Networking\n3. Cloud Computing\n";
        int choice;
        cout << "Select a course (1-3): ";
        cin >> choice;
        string courses[] = {"Web Development", "Networking", "Cloud Computing"};
        if (choice >= 1 && choice <= 3)
        {
            diplomaSubject = courses[choice - 1];
            cout << "Selected Diploma Course: " << diplomaSubject << endl;
        }
        else
        {
            cout << "Invalid choice\n";
        }
    }

    void EnterDiplomaMarks()
    {
        cout << "Enter Diploma marks (out of 100): ";
        cin >> diplomaMarks;
    }

    // Give Result class access to marks
    friend class Result;
};

class Result : public DiplomaCourse
{
    int score = 0;

public:
    void SelectionCriteria()
    {
        cout << "\nChecking Selection Criteria:\n";
        if (ugMarks > 80)
            score += 5;
        if (pgMarks > 80)
            score += 5;
        if (diplomaMarks > 80)
            score += 5;
    }

    void FinalResult()
    {
        cout << "Total Score: " << score << endl;
        if (score > 12)
        {
            cout << "Qualified for Software Developer \n";
        }
        else
        {
            cout << "Not Qualified \n";
        }
    }
};

int main()
{
    Result candidate;

    candidate.SubjectList();
    candidate.EnterUGMarks();

    candidate.Specialization();
    candidate.EnterPGMarks();

    candidate.CourseList();
    candidate.EnterDiplomaMarks();

    candidate.SelectionCriteria();
    candidate.FinalResult();

    return 0;
}
