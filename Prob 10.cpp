#include<iostream>
#include<string.h>

using namespace std;

class Message
{
private:
    char str[30];
    //static data member to count the objects
    static int count;
public:
    //constructor
    Message()
    {
        count++;
    }

    //member function to initialize message
    void initMessage(char s[])
    {
        strcpy(str, s);
    }

    //member function to print message
    void printMessage()
    {
        cout << str << endl;
    }

    //static member function
    static int totalObjects()
    {
        return count;
    }
};

//initialize static member function
int Message::count=0;

//MainFunction

int main()
{
    Message M1;
    Message M2;
    Message M3;

    M1.initMessage("Message 1");
    M2.initMessage("Message 2");
    M3.initMessage("Message 3");

    M1.printMessage();
    M2.printMessage();
    M3.printMessage();

    //Printing object count
    cout << "Total object created: "<< Message::totalObjects()<<endl;
    return 0;
}


