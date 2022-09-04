// Multiple Inheritance in C++

// Multiple Inheritance is a feature of C++ where a class can inherit from more than one base classes.
//   The constructors of inherited classes are called in the same order in which they are inherited.
// A class can be derived from more than one base class.

// syntax of multiple inheritance
// class derived : visibilitymode baseclass 1, visibilitymode baseclass2
// {
//  class body of derived class
// }
// we can create more than 2 base classes
#include <iostream>

using namespace std;

class Base1
{ // 1st base class
protected:
    int base1int;

public:
    void setbase1int(int a)
    {
        base1int = a;
    }
};

class Base2
{ // 2nd base class
protected:
    int base2int;

public:
    void setbase2int(int b)
    {
        base2int = b;
    }
};

// on below line we're creating a derived class from baseclass 1 and baseclass 2
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << " The value of Base1 and Base2 is " << base1int << " and " << base2int << endl;
        cout << " And the sum of Base1 and Base2 is " << base1int + base2int << endl;
    }
};

int main()
{
    Derived der;
    der.setbase1int(10);
    der.setbase2int(17);

    der.show();

    return 0;
}

// The inherited derived class will look like this ---
// base1int will be in protected mode
// base2int will be in protected mode,
// because we've derived child class in public mode

// and the member function will be in
// setbase1int and setbase2int will be in public mode
// because we've derived child class in public mode