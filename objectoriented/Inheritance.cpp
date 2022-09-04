// Inheritance in C++

// The capability of a class to derive properties and characteristics from another class is called Inheritance.
// Inheritance is one of the most important features of Object-Oriented Programming.

// Inheritance is a feature or a process in which, new classes are created from the existing classes.
// The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”.
// The derived class now is said to be inherited from the base class.

// The concept of reusability in C++ is supported using inheritance.
// Reusing classes saves time and money
// we can reuse the properties of an existing class by inheriting from it.

// Different types of inheritance --->
// Multiple Inheritance
// Hierarchichal Inheritance
// Single Inheritance
// Multilevel Inheritance
// Hybrid Inheritance

#include <iostream>

using namespace std;

// base class / Parent class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 120000;
    }
    Employee() {} // we make this default constructor,'cause when u create child class, base class's constructor
                  // gets automatically called.
};

// Derived class / child class
// Syntax   -  {derivedclassname} : {visibilitymode} {baseclassname}{
// methods and members;
//}

// creating a 'programmer' class derived from Employee base class
class Programmer : Employee
{
public:
    int languageCode = 13;

    Programmer(int inpId)
    {
        id = inpId; // on this line we're inheriting private member 'id' of Employee class
    }               // so this will throw error, so we'll need to make it public first, only then it will get execute
    void getData()
    {
        cout << id;
    }
};

int main()
{
    Employee vedant(1), jay(2), rush(4);
    cout << vedant.salary << endl;
    

    cout << jay.salary << endl;
    cout << rush.salary << endl;

    Programmer skills(23);
    // cout<<skills.id<<endl;              // this line will throw error
    cout << skills.languageCode << endl;
    skills.getData();
    return 0;
}

// IMP NOTES
// you can inherit classes in private and public mode only
// default visibility mode of derived / child class is private

// Public Visibility -- If you inherit derived /child class as public then your,
// base class's public member will become
// your public members of derived class
// IMP - Private members of base class will never get inherited.

// Private Visibility -- And if your inherit drived / child class as private then,
// base class's public member will become private members of derived class.

// visibility mode simply means that how you inherit your public members
// you can't inherit private members of class.