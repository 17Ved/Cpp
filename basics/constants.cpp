//Constants - As the name suggests the name constants are given to such variables or values in C/C++ programming language which cannot be modified once they are defined.
// They are fixed values in a program. 
//There can be any types of constants like integer, float, octal, hexadecimal, character constants, etc. 
//Every constant has some range.



#include<iostream>

using namespace std;

int main()
{
  
    const int m = 89;               // Declaring constants
    cout<<"Value of m is"<<m;
    int m = 34;                     // will throw error because m is declared as constant on previous line.
    cout<<"valur of m is"<<m;

    
    return 0;
}
