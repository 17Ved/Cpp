// How we call constructor in derived class from base class in C++ ---
// Important points -
// We can use constructors in derived classes in C++.

// If base class constructor does not have any arguments, there is no need of
// any constructor in derived class.

// But if there is one or maore arguments in the base class constructor,
// derived class need to pass arguments to the base class constructor

// If both base and derived classes have constructors, base class constructor
// is executed first.

// Constructors in Multiple inheritance ---
// In multiple inheritance, base classes are constructed in the order in which
// they appear in the class declaration.

// In multilevel inheritance, the constructors are executed in the order of inheritance.

#include <iostream>

using namespace std;

class Base1
{ // base class
    int data1;

public:
    Base1() {}
    Base1(int i)
    { // creating base class constructor
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printdataBase1(void)
    {
        cout << "The value of data1 is : " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2() {}
    Base2(int j)
    {
        data2 = j;
        cout << "Base2 class constructor is called" << endl;
    }
    void printdataBase2(void)
    {
        cout << "The value of data2 is : " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor is called  " << endl;
    }
    void printdataDerived(void)
    {
        cout << "The value of Derived1  is : " << derived1 << endl;
        cout << "The value of Derived2  is : " << derived2 << endl;
    }
};

int main()
{

    Derived dev(10, 20, 30, 40);
    dev.printdataBase1();
    dev.printdataBase2();
    dev.printdataDerived(); 
    // dev.printdataBase2();
    // dev.printdataDerived();
    return 0;
}

/*
Case 1: If we create constructor in both class then,
class B : public A{
    order of execution of constructor will be -1st A() will get called & then B()
};

case 2:
class A : public B, public C{
    order of execution of constructor -- > B() then C() and A();
};

case 3:
class A: public B, virtual public C{
    order of execution of constructor --> C() then B() and A();
};


*/