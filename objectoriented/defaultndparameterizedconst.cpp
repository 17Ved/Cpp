#include <iostream>

using namespace std;

class complex
{

    int a, b;

public:
    complex(void);          // constructor declaration / default constructor

    complex(int, int);      // parameterized constructor refer to line 29

    void printNumber()
    {
        cout << "The value of a and b is " << a << " and " << b << endl;
    }
};


// complex ::complex(void)     // default constructor
// {
//     a = 90;
//     b = 82;
// }


complex :: complex (int x, int y){      // parameterized constructor   as it is taking 2 parameters/arguments
    a = x;
    b = y;
}


int main()
{
    // Implicit call to pass arguments to parameterized constructor
    complex b(23,12);
    b.printNumber();

    // Explicit call to pass arguments to parameterized constructor
    complex c = complex(99,54);
    c.printNumber();


    // complex a;           // for default constructor
    // a.printNumber();
    return 0;
}




// Default constructor - 
// A constructor without any arguments or with the default value for every argument is said to be the Default constructor. 

// parameterized constructor -
// A parameterized constructor takes parameters as we can see on line 29