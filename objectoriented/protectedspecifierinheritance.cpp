// Protected Access Modifier in CPP --

// Protected: The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class.
//  The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well. 

// Note: This access through inheritance can alter the access modifier of the elements of base class in derived class depending on the mode of Inheritance.

#include<iostream>

using namespace std;

class Base{
    int b;      // private - can't be inherited

    protected:      // can be inherited     / if we derive child class as private 
        int a;                         // then, protected member of base class becomes private in child class
       


};
class Derived : protected Base {


};


int main()
{
    Base b;
    Derived d;

    // cout<<b.a;      // Here we can't print protected member of Base class, it can be inherited only in child class
    // cout<<d.a;      // Also we can't print protected member inherited in child class,'cause it's protected in base class
    return 0;       

}




// Visibility Mode Table -
//                          publically derived |  privately derived  |  protected derived | 
//                      ------------------------------------------------------------------|                        
// 1. Private members  -     Not inherited     |     Not inherited   |    Not inherited   | 
// 2. Protected members-        Protected      |     Private         |    Protected       |  
// 3. Public members   -        Public         |     Private         |    Protected       |  
//                      -------------------------------------------------------------------
