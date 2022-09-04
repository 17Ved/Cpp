// Static Data Members in C++ --

// Static data members are class members that are declared using the static keyword.
// There is only one copy of the static data member in the class, even if there are many class objects.
// This is because " all the objects share the static data member".

// Only one copy of that member is created for the entire class and is shared by all the objects of that class,
//         no matter how many objects are created.
// It is initialized before any object of this class is being created, even before main starts.
// It is visible only within the class, but its lifetime is the entire program
// static variable is also known as class variable/member in oops
// one static variable/member gets shared by all objects in class
// if we don't specify variable/member a static variable, then the object will get shared by that variable separately
// static members is just a value that can be accessed by any object, and is specified in class.
#include <iostream>

using namespace std;

class Employee
{

    int id;
    static int count; // by default static member initializes from zero
    // static int count = 100; // this will give syntax error, so for defining the default value we can set it outside of class, refer to line 35
public:
    void setData(void)
    {
        cout << "Enter the ID" << endl;
        cin >> id;
        count++; // value of count gets shared by all objects,
    }

    void getData(void)
    {
        cout << "The ID of Emp is" << id << "and No of emp is " << count << endl;
    }


    // defining static function / static member function
    static void getCount(void){
        // cout<<id;       // this line will throw erro, 'cause we're trying to access normal variable inside static function

        cout<<"The value of count is "<< count<<endl;
        // here we're creating static member function, and note that we're accessing this
        // static member funcn by static member/variable i.e. "count" variable
        // Imp Note - static member function can only be accessed by static variables/member
    }






};

int Employee ::count; // Default value is zero    and count is static data member of class Employee
// but we can initialize the value of count by defining count like below
// int Employee ::count = 100; // we can't define this static count members value inside class

int main()
{
    Employee vedant, jayesh, rushi; // here vedant, jayesh, rushi are sharing count variable among them
    vedant.setData();
    vedant.getData();
    Employee :: getCount();         // static member function - can be called even if there is no object of class exists.


    jayesh.setData();
    jayesh.getData();
    Employee :: getCount();         // static member function 

    rushi.setData();
    rushi.getData();
    Employee :: getCount();        // static member function 
    return 0;
}



// static member function
// Static Function Members
// By declaring a function member as static, you make it independent of any particular object of the class. 
// A static member function can be called even if no objects of the class exist and the static functions
// are accessed using only the class name and the scope resolution operator ::.

// static member functions can only be accessed by static member/variable
