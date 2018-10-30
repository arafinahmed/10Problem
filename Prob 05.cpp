#include<iostream>
using namespace std;

class Numbers
{
private:
    int a, b;
public:
    Numbers()
    {
        a = 0; b = 0;
    }
    //Setter function to set a and b
    void setA(int num)
    {
        a = num;
    }
    void setB(int num2)
    {
        b = num2;
    }
    //getter function to get value of a and b
    int getA() const
    {
        return a;
    }
    int getB() const
    {
        return b;
    }

};


int main()
{
    //Declaring to the class
    Numbers Num;
    //setValues
    Num.setA(100);
    Num.setB(200);
    //printing the value
    cout << "Value of A: "<< Num.getA() << endl;
    cout << "Value of B: "<< Num.getB() << endl;

    return 0;
}
