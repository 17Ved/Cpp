#include<iostream>

using namespace std;

int main()
{
    int a = 90, b = 78;
    // Operators in cpp

    // Arithmetic Operators
    cout<<"following are the arithmetic operators";
    cout<<"This is value of a + b: " << a+b<<endl;
    cout<<"This is value of a - b: " << a-b<<endl;
    cout<<"This is value of a * b: " << a*b<<endl;
    cout<<"This is value of a / b: " << a/b<<endl;
    cout<<"This is value of a % b: " << a%b<<endl;
    cout<<endl;
   // Increment and decrement<<end;  
    cout<<"following are the increment operator";
    cout<<"This is value : " << b++<<endl;
    cout<<"This is value : " << ++b<<endl;
    cout<<"This is value : " << --b<<endl;
    cout<<"This is value : " << b--<<endl;
    cout<<endl;

    cout<<"following are the comparison operator";
    cout<<"This is value of a == b : " <<(a == b) <<endl;
    cout<<"This is value of a != b : " <<(a != b) <<endl;
    cout<<"This is value of a <= b : " <<(a <= b) <<endl;
    cout<<"This is value of a >= b : " <<(a >= b) <<endl;
    cout<<"This is value of a < b : " <<(a < b) <<endl;
    cout<<"This is value of a > b : " <<(a > b) <<endl;
    cout<<endl;

    cout<<"following are the logical operators"<<endl;
    cout<<"The value of AND operator a and b is"<< ((a==b) && (a<=b))<<endl;
    cout<<"The value of OR operator a and b is"<< ((a==b) || (a<=b))<<endl;
    cout<<"The value of NOT operator"<< (!(a==b)) <<endl;

    
    
    
    return 0;
}
