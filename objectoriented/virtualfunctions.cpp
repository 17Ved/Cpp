// Virtual functions in C++

// A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class. 
// When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function. 

// Imp Points to remember --
// Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
// They are mainly used to achieve Runtime polymorphism
// Functions are declared with a virtual keyword in base class.
// The resolving of function call is done at runtime.

// Virtual functions cannot be static.
// A virtual function can be a friend function of another class.
// Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
// The prototype of virtual functions should be the same in the base as well as derived class.
// They are always defined in the base class and overridden in a derived class.
// It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.

// "A class may have virtual destructor but it cannot have a virtual constructor".


#include<iostream>

using namespace std;

class Baseclass
{
public:
    int varbase = 10;
    virtual void display()
    {
        cout << "Displaying the base class variable " << varbase << endl;
    }
};

class Derivedclass : public Baseclass
{
public:
    int varderived = 20;
    void display()
    {
        cout << "Displaying the base class variable " << varbase << endl;
        cout << "Displaying the derived class variable " << varderived << endl;
    }
};

int main()
{
    Baseclass *baseptr;
    Baseclass objbase;
    Derivedclass derptr;


    baseptr = &derptr; // base class's pointer object pointing to derivedclass object(derptr)
    baseptr->display(); // refer to line 30, we've made the display() of base class as virtual 
    // so the display() of derived class will get called here

    // virtual function is used to just override/ reverse the default behaviour of functions and pointer object
    return 0;

}