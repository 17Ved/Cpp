#include <iostream>

using namespace std;

class Baseclass
{
public:
    int varbase;
    void display()
    {
        cout << "Displaying the base class variable " << varbase << endl;
    }
};

class Derivedclass : public Baseclass
{
public:
    int varderived;
    void display()
    {
        cout << "Displaying the base class variable " << varbase << endl;
        cout << "Displaying the derived class variable " << varderived << endl;
    }
};

int main()
{
    Baseclass *base_classptr;
    Derivedclass derived_obj;
    base_classptr = &derived_obj; // on this line, we're pointing baseclass's pointer object (*base_classptr)to --  this is a valid line
    // derived class's object i.e. to derived_obj;
    // Imp point is - your base class's pointer object can point to derived class object

    base_classptr->varbase = 63; // this will set the varbase value to 63
    base_classptr->display();    // here base class's display() will get called
                                 // above is the example of late binding

    // base_classptr->varderived = 23; // this line is not valid, because the base class pointer object can access
    // the members of base class only, to which it is pointing
    // in this case base_classptr is pointing to base class(Baseclass), will throw error

    Derivedclass *derived_classptr;    // creating derived class's pointer object
    derived_classptr = &derived_obj;   // on this line we're pointing pointer object (*derived_classptr) of derived class to its object (derived_obj)
    derived_classptr->varbase = 16;    // we can set the varbase value here
    derived_classptr->varderived = 97; // we can set the varderived value offcourse
    derived_classptr->display();       // now this line display() of derived class will get called

    return 0;
}