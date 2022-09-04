// Ambiguity Resolution in Inheritance in C++ ----

// In multiple inheritances, when one class is derived from two or more base classes
// then there may be a possibility that the base classes have functions with the same name,
// and the derived class may not have functions with that name as those of its base classes.
// If the derived class object needs to access one of the similarly named member functions of the base classes
// then it results in ambiguity because the compiler gets confused about which base’s class member function should be called.

// To solve this ambiguity scope resolution operator is used denoted by ‘ :: ‘

#include <iostream>

using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Good afternoon" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;
    public:
        void greet(){
            Base1 :: greet();      // on this line, we're solving the ambiguity error
            Base2 :: greet();      // on this line, we're solving the ambiguity error
        }
};

class B{
    int a;
    public:
        void say(){
            cout<<"hello world"<<endl;
        }
};

class D : public B{
    int a;
    public:
        void say(){
            cout<<"d's hello world"<<endl;
        }
};


int main()
{
    Base1 obj1;
    Base2 obj2;

    obj1.greet();
    obj2.greet();

// Ambiguity type 1 error
// writing only this 2 lines
    Derived der; // this will throw ambiguity error
    der.greet(); // because when u are calling the greet()
    // compiler is getting confused between the 2 base classe's greet() function,
    // and confused that which one greet() function it should call.
// so to solve this problem we need to specify that we're calling base class 1's or base class 2's greet()
// we're solving this error , refer to line no 38 - inside derived classe's greet()


// Ambiguity type 2 error

 B b;
 b.say();

 D d;
 d.say();
// so on above lines we're creating objects and calling the say() of both
// base and derived class, so it'll not throw any error

// and if we don't specify say() inside derived class D, then the 
// base class's say() will get called if we create object of derived class
// and call say().


    return 0;
}
