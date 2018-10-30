#include<iostream>
using namespace std;

//A user defined function

void testFunction()
{
    //declaring a local class
    //which is accessible within this function only
    class Test1
    {
    private:
        int num;
    public:
        void setValue(int n)
        {
            num = n;
        }
        int getValue()
        {
            return num;
        }
    };
//any message of the function
cout << "Inside testFunction..."<<endl;
//Creating class's object
    Test1 T1;
    T1.setValue(100);
    cout << "Value of test1 num: "<< T1.getValue() << endl;

}

int main()
{
    //declaring a local class
    //which is accessible within this function only
    class Test2
    {
    private:
        int num;
    public:
        void setValue(int n)
        {
            num = n;
        }
        int getValue()
        {
            return num;
        }
    };
    //Calling testFunction
    cout << "Calling testFunction..." <<endl;
    testFunction();
    //inside main
    cout << "Calling mainFunction..." <<endl;
    Test2 T2;
    T2.setValue(222);
    cout << "Value of test2 num: "<< T2.getValue() << endl;
    return 0;
}
