// Pointer Expressions and Pointer Arithmetic 
// A limited set of arithmetic operations can be performed on pointers. A pointer may be: 
 
// incremented ( ++ )
// decremented ( — )
// an integer may be added to a pointer ( + or += )
// an integer may be subtracted from a pointer ( – or -= )

// Pointer arithmetic is meaningless unless performed on an array. 
// Note : Pointers contain addresses. Adding two addresses makes no sense, because there is no idea what it would point to. 
// Subtracting two addresses lets you compute the offset between these two addresses.


#include<iostream>

using namespace std;

int main()
{
    int marks[4] = {23,45,32,56};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
    // we use & of operator to fetch the address of any variable;
    // but in aaray '&' operator is not valid, so in array we use only var name to fetch the address
    // give below will explain you the statement

    int *p = marks;     // decalring pointer variable 'p' 
    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    // cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p);
    cout<<*(p++);
    cout<<*p;
    
    
    
    
    
    return 0;

}