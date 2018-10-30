#include<iostream>
using namespace std;
class Numbers
{
public:
        int a, b;


};

int main()
{
    //declaring object to the class
    Numbers num;
    //assigning value
    num.a = 10;
    num.b = 20;
    //print
    cout << "a: "<< num.a << endl;
    cout << "b: "<< num.b << endl;
    return 0;
}
