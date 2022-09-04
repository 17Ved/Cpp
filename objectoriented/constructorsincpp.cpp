// Constructors in CPP

// Constructor in C++ is a special method that is invoked automatically at the time of object creation.
// It is used to initialize the data members of new objects generally.
// The constructor in C++ has the same name as the class or structure.
// Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object which is why it is known as constructors.
// Constructor does not have a return value, hence they do not have a return type.

#include <iostream>

using namespace std;

class complex
{

    int a, b;
    // creating a constructor
    // constructor is a special member function with same name as class/
    // it is used to initialize the objects of the class
    // it is automatically get called or invoked when an object is created

public:
    complex(void); // constructor declaration

    void printData()
    {
        cout << "value of a is " << a << " and b is " << b << endl;
    }
};

complex ::complex(void)     // this is default constructor, as it takes no parameter
{ // defining constructor outside complex class, we can also define it inside class, but we should define it inside public specifier.
  // also don't need to specify return type, 'cause constructors don't have return type
    cout<<"Hey these are the values of a and b"<<endl;
    a = 10;
    b = 0;
}

int main()
{
    complex c; // creating objects 'c'
    c.printData();
    return 0;
}


// constructor is just a member function of class, which have same name as class and nothing special

// characteristics of constrctor - 
// It should be declared in the public section of the class.
// They are automatically get invoked / called whenever the object is created.
// They cannot return values and do no have return types
// It can have default arguments
// We cannot refer to their address