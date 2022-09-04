// C++ Multi Level Inheritance  ---
// When one class inherits another class which is further inherited by another class, it is known as multi level inheritance in C++.
// Inheritance is transitive so the last derived class acquires all the members of all its base classes.

#include <iostream>

using namespace std;

class student
{
protected:
    int rollno;

public:
    void setrollNumber(int);
    void getrollNumber(void);
};

void student ::setrollNumber(int r)
{
    rollno = r;
}

void student ::getrollNumber(void)
{
    cout << "Student Roll No : " << rollno << endl;
}

class exam : public student
{ // publically inheriting exam class from student class
protected:
    float maths;
    float physics;

public:
    void setmarks(float, float);
    void getmarks(void);
};

void exam ::setmarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam ::getmarks()
{
    cout << " The marks in Maths and Physics are " << maths << " & " << physics << endl;
}

// Now this is the example of Multilevel inheritance
class result : public exam
{ // inheriting 'result' class from exam class, which is inherited from student class
    float percentage;

public:
    void displayresult()
    {
    //     // getrollNumber();
    //     // getmarks();
        cout << "Your percentage is " << (maths + physics) / 2 <<"%"<< endl;
    };
};

int main()
{
    result vedant;
    vedant.setrollNumber(17);
    // vedant.getrollNumber();
    vedant.setmarks(98.34, 91.23);
    // vedant.getmarks();
    vedant.displayresult();
    return 0;
}


/*
Notes - 
1. If we're inheriting B from A and C from B: A --> B --> c
2. Then A is the base class for B, and B is the base class for C
3. Here A --> B --> C is the Inheritance path.


*/