//Prob 02
#include<iostream>
using namespace std;

//Class declaration
class point
{
private:
    int X, Y;
public:
    // Default constructor
    point()
    {
        X=0; Y=0;
    }
    //setter function
    setPoint(int a, int b)
    {
        X = a;
        Y = b;
    }
    //getter function
    getX() {return X;}
    getY() {return Y;}
};


int main()
{
    //Object
    point p1, p2;
    //set point
    p1.setPoint(5, 10);
    p2.setPoint(50, 100);
    //get function
    cout << "p1: "<< p1.getX() << " , " << p1.getY() << endl;
    cout << "p2: "<< p2.getX() << " , " << p2.getY() << endl;
    return 0;
}
