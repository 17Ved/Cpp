// What is a destructor? 
// Destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed.
//  Meaning, a destructor is the last function that is going to be called before an object is destroyed.

// Important points about destructor.
// Destructor is also a special member function like constructor. Destructor destroys the class objects created by constructor. 
// Destructor has the same name as their class name preceded by a tiled (~) symbol.
// It is not possible to define more than one destructor. 
// The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be overloaded.
// Destructor neither requires any argument nor returns any value.
// It is automatically called when object goes out of scope. 
// Destructor release memory space occupied by the objects created by constructor.
// In destructor, objects are destroyed in the reverse of an object creation.


#include<iostream>

using namespace std;

int count = 0;
class num{

    public:
        num(){      // constructor
            count++;
            cout<<"This is time when constructor is called"<<count<<endl;
        }

        ~num(){     // destructor
            cout<<"This is time when destructor is called"<<count<<endl;
            count--;
        }
};


int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object num1"<<endl;

    num n1; 
    {               // after completion of this block, all the constructor will get destroyed one by one
        cout<<"Entering 2 more objects "<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }

    cout<<"Back to main "<<endl;
    return 0;

}                   