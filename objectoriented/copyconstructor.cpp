// Copy Constructor -

// A copy constructor is a member function that initializes an object using another object of the same class.
//  Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
// Copy constructor takes a reference to an object of the same class as an argument.
// syntax - ClassName (ClassName &old_obj);
// syntax - ClassName (const ClassName &old_obj);

#include <iostream>

using namespace std;

class Number
{

    int a;

public:
    Number() {}

    Number(int num)
    {
        a = num;
    }

    // When no copy constructor is found to compiler, compiler supplies its own copy constructor.
    Number(Number &z)
    { // copy constructor
        cout << "copy constructor called on below line" << endl;
        a = z.a;
    }

    void display()
    {
        cout << "The number for this object is" << a << endl;
    }
};

int main()
{

    Number x, y, z(34), z2; // x's a value gets equal to z1's a value
    x.display();
    y.display();
    z.display();

    // now here if we want an object named as z1 exactly should resembles as object 'z' then we will use copy constructor and will pass
    // z as argument, or any other object like x or y that we would like to have copy constructor for object z1

    Number z1(z); // copy constructor called / invoked-- copying z in z1
    z.display();

    z2 = z; //  copy constructor will not get called because the object z2 is already created on line 39
    z2.display();

    Number z3 = z; // copy constructor will get called / invoked
    z3.display();

    return 0;
}

// Example: Implicit copy constructor

#include <iostream>
using namespace std;

class Sample
{
    int id;

public:
    void init(int x)
    {
        id = x;
    }
    void display()
    {
        cout << endl
             << "ID=" << id;
    }
};

int main()
{
    Sample obj1;
    obj1.init(10);
    obj1.display();

    Sample obj2(obj1); // or obj2=obj1;
    obj2.display();
    return 0;
}

// Example: Explicit copy constructor

#include <iostream>
using namespace std;

class Sample
{
    int id;

public:
    void init(int x)
    {
        id = x;
    }
    Sample() {} // default constructor with empty body

    Sample(Sample &t) // copy constructor
    {
        id = t.id;
    }
    void display()
    {
        cout << endl
             << "ID=" << id;
    }
};
int main()
{
    Sample obj1;
    obj1.init(10);
    obj1.display();

    Sample obj2(obj1); // or obj2=obj1; copy constructor called
    obj2.display();
    return 0;
}
