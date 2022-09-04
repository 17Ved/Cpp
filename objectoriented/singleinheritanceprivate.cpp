// Following is an example of single inheritance -

#include <iostream>

using namespace std;

// base class
class Base
{
    int data; // private by default & is not inheritable

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void) // we can't call this function outside class  i.e. in main function,'cause they're private
{
    data = 10;
    data2 = 17;
}

int Base ::getData1() // we can't call this function outside class  i.e. in main function,'cause they're private
{
    return data;
}

int Base ::getData2() // we can't call this function outside class  i.e. in main function,'cause they're private
{
    return data2;
}

class Derived : private Base
{ // visibility mode private
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    setData();
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Value of data is" << getData1() << endl;
    cout << "Value of data2 is" << data2 << endl;
    cout << "Value of data3 is" << data3 << endl;
}

int main()
{
    Derived der;
    // Base bes;            // creating base class object and then calling setdata() will give u garbage values
    // bes.setData();
    der.process();
    der.display();

    // so in here main function we can't call setData(), getData1() and getData2()

    return 0;
}