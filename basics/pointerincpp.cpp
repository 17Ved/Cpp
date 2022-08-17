#include<iostream>

using namespace std;

int main()
{
    
    // To store address of a variable, we use pointer variable
    int a = 3;         
    int *b = &a;        // & -- address of operator
    cout<<"The address of a is"<<&a<<endl;        // we can fetch the address of 'a' by using this and below line
    cout<<"The address of a is"<<b<<endl;         // these both are valid statements in cpp


     // * -- (value of)dereference operator
    cout<<"The value at address b is"<<*b<<endl;

   
    // To store address of pointer variable, we use pointer to pointer variable -
    int **c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;

    cout<<"The value of at address c is"<<*c<<endl;
    cout<<"The value of at address value_at(value_at(c)) is"<<**c<<endl;
    return 0;

}


// Pointers in CPP-
// pointer is data types which holds the address of other datatypes
// Pointers are symbolic representation of addresses. 
// They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures.

// Syntax - datatype *var_name; 
// int *ptr;   ptr can point to an address which holds int data