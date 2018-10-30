#include<iostream>
using namespace std;

class Student
{
private:
    int rNo;
    float perc;
    //private member function
    void inputOn()
    {
        cout << "Input start...."<<endl;
    }
    void inputOff()
    {
        cout << "Input end...."<<endl;
    }
public:
    //public member function
    void read()
    {
        //calling first member function
        inputOn();
        //Read rNo and perc
        cout << "Enter roll number: ";
        cin >> rNo;
        cout << "Enter percentage: ";
        cin >> perc;
        //Calling second member function
        inputOff();
    }
    void print()
    {
        cout << endl;
        cout << "Roll Number: "<< rNo << endl;
        cout << "Percentage: " << perc << "%" << endl;
    }
};


int main()
{
    //declaring object of class student
    Student Std;

    //reading and printing details of a student
    Std.read();
    Std.print();
    return 0;
}
