#include<iostream>
using namespace std;
//structure to rad details
struct Student
{
private:
    int rNo;
    float perc;
public:
    //function to read details
    void read()
    {
        cout << "Enter Roll: ";
        cin >> rNo;
        cout << "Enter percentage: ";
        cin >> perc;
    }
    //function to print details
    void print()
    {
        cout << "Roll : "<< rNo << endl;
        cout << "Percentage : "<< perc << "%" << endl;

    }
};

int main()
{
    struct Student Std;
    Std.read();
    Std.print();
    return 0;
}
