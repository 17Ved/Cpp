// STRUCT in CPP

// We often come around situations where we need to store a group of data whether of similar data types or non-similar data types.
//  We have seen Arrays in C++ which are used to store set of data of similar data types at contiguous memory locations.
// Unlike Arrays, Structures in C++ are user defined data types which are used to store group of items of non-similar data types.

// UNION in CPP
// A union is a type of structure that can be used where the amount of memory used is a key factor.
// Similarly to the structure, the union can contain different types of data types.
// Each time a new variable is initialized from the union it overwrites the previous in C language but in C++ we also don’t need this keyword and uses that memory location.

// ENUM in CPP
//  Enums are user-defined types that consist of named integral constants.

// It helps to assign constants to a set of names to make the program easier to read, maintain and understand.
// An Enumeration is declared by using the keyword “enum“.

#include <iostream>

using namespace std;

typedef struct employee // typedef: The typedef is used to give data type a new name.
{
    int Ied;      // 4 bytes
    char favchar; // 1 byte
    float salary; // 4 byte  Total -- 9 bytes we're using in struct
} ep;

// Union example
union money
{
    int rice;     // 4 byte
    char car;     // 1 byte
    float pounds; // 4 byte   Total -- 4 bytes will be used by all elements in union,
                  //'cause in union max. variables memory gets allocated to all elements
};

int main()
{

    union money m1;

    m1.rice = 345;
    m1.car = 'c';

    cout << m1.rice << endl << m1.car << endl;

    ep vedant;

    vedant.Ied = 17;
    vedant.favchar = 'L';
    vedant.salary = 2500000; // This no will print in scientific notation

    cout << "The value of employee vednat is" << vedant.salary << endl;
    cout << "The value of employee vednat is" << vedant.favchar << endl;
    cout << "The value of employee vednat is" << vedant.Ied << endl;

    // typedef example
    // typedef long double b;

    // b ch, er;
    // ch = 8999;
    // er = 343;
    // cout<<ch<<er;



    // enum --
    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;

    return 0;
}