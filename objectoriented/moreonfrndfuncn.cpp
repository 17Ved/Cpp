// Following is the simple program to demonstrate the use of friend function()

#include <iostream>

using namespace std;

// forward declaration
class Y;

class X
{

    int data;

public:
    void setValue(int value)
    {
        data = value;
    }

    // declaration of friend function add()
    friend void add(X, Y); // on this line we're saying that add() is friend function of class X and Y.
                           // After this compiler will read the friend statement, but here we've declared Y class as well, but compiler don't know about it
                           // while compiling the program, so that's why we have done forward declaration on line 3
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }

    // declaration of friend function add()
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "summing of data of X and Y classe's objects gives me" << o1.data + o2.num << endl;
}

int main()
{

    X a1;
    a1.setValue(10);

    Y b1;
    b1.setValue(17);

    add(a1, b1);
    return 0;
}