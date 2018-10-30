#include<iostream>
using namespace std;
//Structure definition with private and public member
struct Student
{
private:
    int rNo; float prc;
public:
    //Constructor
    Student(int r, float p)
    {
        rNo = r; prc = p;
    }
    //function to read details
    void read()
    {
        cout << "Enter roll number: ";
        cin >> rNo;
        cout << "Enter percentage: ";
        cin >> prc;
    }
    //function to print details
    void print()
    {
        cout << "Roll : " << rNo << "\nPercentage : " << prc << endl;
    }
};



int main()
{
    //reading roll number and percentage to initialize
    //the members while creating object
    int roll;
    cout << "Enter the roll number to initialize object: ";
    cin >> roll;
    cout << "Enter the percentage to initialize object: ";
    float per;
    cin >> per;
    // declaring and initialing the object
    struct Student Std(roll, per);
    // print the value
    cout << "After initializing the object...."<< endl;
    Std.print();

    //reading and printing student details
    //by calling public member function of the structure

    Std.read();
    Std.print();
    return 0;
}
