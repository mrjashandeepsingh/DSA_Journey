#include <iostream>
using namespace std;

int main()
{
    // Write a program that takes input of age and prints if you are adult or not

    int age1;
    cout << "Enter your age: ";
    cin >> age1;
    if (age1 >= 18)
        cout << "You're adult";
    else
        cout << "You're NOT adult";

    // A school grading system
    float m;
    cout << "\nEnter Marks: ";
    cin >> m;
    if (m < 25)
    {
        cout << "F";
    }
    else if (m <= 44)
    {
        cout << "E";
    }
    else if (m <= 49)
    {
        cout << "D";
    }
    else if (m <= 59)
    {
        cout << "C";
    }
    else if (m <= 79)
    {
        cout << "B";
    }
    else if (m <= 100)
    {
        cout << "A";
    }

    // Nested if else problem

    int age;
    cout << "\nEnter your age:";
    cin >> age;
    if (age < 18) {
        cout << "Not eligible for job.";
    } 
    else if (age <= 57) {
        cout << "Eligible for job.";
        if (age >=55) {
            cout << ", but retirement soon";
        }
    }
    else {
        cout << "Retirement time.";
    }
    return 0;
}