// OBJECT ORIENTED PROGRAMMING IN CPP

// As the name suggests, Object-Oriented Programming or OOPs refers to languages that use objects in programming, 
// they use objects as a primary source to implement what is to happen in the code.
//  Objects are seen by the viewer or user, performing tasks assigned by you. Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism etc. in programming.
//   The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function. 

// Works on the concept of classes and objects
// a class is a template to create objects
// treats data as a critical element
// decomposes the problem in objects and builds data and fucntions around the objects


// Classes - Basic template for creating objects
// Objects - basic run time entities
// Data Abstraction and Encapsulation - Wrapping data and functions into single unit.
// Inheritance - Properties of one class can be inherited into others.
// Polymorphism - ability to take more than one forms
// Dynamic Binding - (also known as late binding/ data binding)code which will execute is not known unitl the program runs.
// Message passing - object message(information) call format.


// Benefits of OOPS
// Better code reusability using objects and inheritance.
// priciple of data hiding helps build secure systems.
// multiple objects can co-exist without any interference.
// software complexity can be easily managed



// Benefits of classes over structures in 'c'
// class in extension of structures in c
// in structures members are public
// we can't use methods(functions) in stuctures


// structures in c++ are typedefed





//------------------------------------------------------------------

#include<iostream>

using namespace std;

class Employee{     // class in extended version of structures in c

    private:
        int a, b, c;
    public:
        int d ,e;

    void setData(int a1,int b1,int c1);        // Declaration 


    void getData(){                             // declaring function inside class
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }

};


// on below line we're declaring setData function outside the class Employee
// so to declare functin outside class use following syntax
// we can decalre function inside and outside of class 
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}


int main()
{

    Employee harry;
    // harry.a = 234;          // you cannot decalre value of 'a' like this, 'cause it's private member, will throw error
    harry.d = 23;
    harry.e = 34;
    harry.setData(2,5,8);
    harry.getData();
    return 0;

}