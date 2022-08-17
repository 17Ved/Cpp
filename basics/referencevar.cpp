// Reference variables
// When a variable is declared as a reference,
// it becomes an alternative name for an existing variable. 
//A variable can be declared as a reference by putting ‘&’ in the declaration.


// Typecasting 
// A type cast is basically a conversion from one datatype to another datatype.
// for ex - int to float, float to char, etc.
#include<iostream>

using namespace std;

int main()
{
    
    float x = 455;
    float & y = x;      // Both lines will print same output i.e. value of x
    cout<<x<<endl;      // we're just assigning new var name to x by using '&' and giving it name 'y'   
    cout<<y;



    // Typecasting

    int n = 45;
    cout<<"The value of n is "<<(float)n;   // converting int to float
    cout<<"The value of n is "<<float(n);   // converting int to float

    float m = 7.9;
    cout<<"The value of m is "<<(int)m;
    cout<<"The value of m is "<<int(m);

    cout<<"The expressio is "<< n + m<<endl;
    cout<<"The expression is "<<n + int(m)<<endl;
    cout<<"The expression is "<<n + (int)m<<endl;
    


}