#include <iostream>

using namespace std;

// Forward declaration
class complex; // to make the member function friend of complex class, from calculator class we need to declare our complex class 1st

class calculator
{ // so decalre the calculator class first

public:
    int add(int a, int b)
    {
        return (a + b);
    }

    // int sumComplex(complex o1, complex o2){
    // return (o1.a + o2.a);                   // on this line we're accessing private data members i.e. 'a' & 'b' of class complex inside class calculator
    // }                                       // so this line will throw error

    // above lines will throw error reason is given
    // so, we'll declare it first inside calculator class and then define it outside class

    int sumComplex(complex, complex); // we're doing declaration 1st of member fucntion sumComplex 1st and then we will define it outside the calculator class / refer to line - 46
    
    int sumCompComplex(complex, complex);
};

class complex
{

    int a, b;

    // on Above lines we're declaring friend functions individually
    friend int calculator ::sumComplex(complex, complex); // giving access to sumComplex member function to access the private member of complex class
    friend int calculator ::sumCompComplex(complex, complex);

    // so the alternative of declaring functions one by one as friend function, is to decalre the whole (calculator) class as friend class
    // we can do that by following lines --
    friend class calculator ;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << " i " << endl;
    }
};

int calculator ::sumComplex(complex o1, complex o2)
{                         // defining sumComplex member function of calculator class
    return (o1.a + o2.a); // so unlike on line 14 to 16, we'll be now able to access the private data member of class commplex
}

int calculator ::sumCompComplex(complex o1, complex o2)
{                         
    return (o1.b + o2.b); 
}


int main()
{
    complex c1, c2;
    c1.setNumber(1, 5);
    c2.setNumber(4, 8);

    calculator clac;

    int res = clac.sumComplex(c1, c2);
    cout << "The result of sum Complex is " << res << endl;
    int resc = clac.sumCompComplex(c1, c2);
    cout << "The result of sum of Comp Complex is " << resc << endl;

    return 0;
}

// What is forward declaration
// A forward declaration tells the compiler about the existence of an entity before actually defining the entity.
//  Forward declarations can also be used with other entity in C++, such as functions, variables and user-defined types.