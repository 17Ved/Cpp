// Virtual base class in cpp ---

// Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances”
// of a given class appearing in an inheritance hierarchy when using multiple inheritances.
// virtual base class prevents duplication of members and ambiguity error

// Syntax 1:
// class B : virtual public A
// {
// };

// Syntax 2:
// class C : public virtual A
// {
// };

#include <iostream>

using namespace std;

class student
{ // base class student is our virtual base class
protected:
    int roll_no;

public:
    void setnumber(int a)
    {
        roll_no = a;
    }
    void printnumber(void)
    {
        cout << "Your roll no. is : " << roll_no << endl;
    }
};

class test :virtual public student
{ // test inheriting from virtual student class
protected:
    float maths, physics;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printmarks(void)
    {
        cout << " Your marks is below " << endl
             << " Maths : " << maths << endl
             << " Physics : " << physics << endl;
    }
};

class sport :virtual public student
{ // sport inheriting from virtual student class
protected:
    float score;

public:
    void setscore(float sc)
    {
        score = sc;
    }
    void printscore(void)
    {
        cout << " Your PT score is : " << score << endl;
    }
};

class result : public test, public sport
{// result class inheriting from test and sport class
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        printnumber();
        printmarks();
        printscore();

        cout << " Your total is : " << total << endl;
    }
};

int main()
{
    result dev;
    dev.setnumber(42);
    dev.setmarks(90.50, 82.70);
    dev.setscore(4);
    dev.display();

    return 0;
}



/*  In above program we're inheriting setnumber() and printnumber() in test, and sport class from student class.
 and then we're inheriting result class from test and sport class
 so the setnumber & printnumber function will get inherited in test and sport class both.
 and then if we call these function using the result class objects, the compiler will get confused and won't be able to decide
 that, from which class (test, sport) it should call the printnumber and setnumber function - & then it'll throw an error of ambiguity
 so to solve this problem we're using 'virtual' keyword while inheriting test and sport class from student class
 so after that setnumber and printnumber functions will not get called twice when we call them after creating object of result class
 and compiler will be able to execute program with no ambiguity errors. */