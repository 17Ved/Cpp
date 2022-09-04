// Manipulators are helping functions that can modify the input/output stream. 
// It does not mean that we change the value of a variable, 
// it only modifies the I/O stream using insertion (<<) and extraction (>>) operators. .


// Types of Manipulators There are various types of manipulators:

// Manipulators without arguments: The most important manipulators defined by the IOStream library are provided below.
// 1. endl: It is defined in ostream. It is used to enter a new line and after entering a new line it flushes (i.e. it forces all the output written on the screen or in the file) the output stream.
// 2. ws: It is defined in istream and is used to ignore the whitespaces in the string sequence.
// 3. ends: It is also defined in ostream and it inserts a null character into the output stream. It typically works with std::ostrstream, when the associated output buffer needs to be null-terminated to be processed as a C string.
// 4. flush: It is also defined in ostream and it flushes the output stream, i.e. it forces all the output written on the screen or in the file. Without flush, the output would be the same, but may not appear in real-time.

#include<iostream>
using namespace std;
#include<iomanip>


// The header <iomanip> is part of the Input/output library of the C++ Standard Library.
// It defines the manipulator functions resetiosflags() , setiosflags() , setbase() , setfill() , setprecision() , and setw() . 
// These functions may be conveniently used by C++ programs to affect the state of iostream objects.
int main()
{
    int a = 3, b = 65, c = 8783;
    cout<<"The value of a is with setw: "<<setw(4)<<(a)<<endl;
    cout<<"The value of a is with setw: "<<setw(4)<<(b)<<endl;
    cout<<"The value of a is with setw: "<<setw(4)<<(c)<<endl;

    cout<<endl;
    cout<<"The value of a is without setw: "<<(a)<<endl;
    cout<<"The value of a is without setw: "<<(b)<<endl;
    cout<<"The value of a is without setw: "<<(c)<<endl;


    // Operator Precedence 
    int v = 8, h = 4;

    int z = ((((v*h)+h)-83)+34);
    return 0;
}
