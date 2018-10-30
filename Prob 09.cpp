#include<iostream>
#include<string.h>

using namespace std;

class Marks
{
private:
    int rNo;
    float perc;
public:
    //constructor
    Marks()
    {
        rNo = 0; perc = 0.0f;
    }
    void readMarks()
    {
        cout << "Enter roll number: ";
        cin >> rNo;
        cout << "Enter percentage: ";
        cin >> perc;
    }

    //print roll number and percentage
    void printMarks()
    {
        cout << "Roll: "<< rNo << endl;
        cout << "Percentage: "<<perc << "%" <<endl;
    }
};

class Student
{
private:
    //Object to marks class
    Marks objM;
    char name[30];
public:
    //input student details
    void readStudent()
    {
        //input name
        cout << "Enter name: ";
        cin.getline(name, 30);
        //input marks
        objM.readMarks();
    }
    void printStudent()
    {
        //print name
        cout << "Name: "<<name << endl;
        objM.printMarks();
    }
};


int main()
{
    Student Std;
    Std.readStudent();
    Std.printStudent();
    return 0;
}
