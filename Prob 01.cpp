#include<iostream>

using namespace std;


class Number
{
private:
    int num;
public:
    void setNum(int n)
    {
        num = n;
    }
    int getNum(void)
    {
        return num;
    }
};
// A non-member function
void myFunction(class Number N, int number)
{
    //Calling setter function a asigning a number
    N.setNum(number);
    //calling getter function and printing a number
    cout << "The value is: " << N.getNum() << endl;
}
int main()
{
    //Local variable of the main function
    int num;
    //object to number class
    Number onjN;
    //assigning valute
    num = 10;
    //
    myFunction(onjN, num);
}
