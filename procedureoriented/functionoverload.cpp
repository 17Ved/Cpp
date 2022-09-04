// Function Overloading in CPP

// Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters.
//  When a function name is overloaded with different jobs it is called Function Overloading.
//   In Function Overloading “Function” name should be the same and the arguments should be different. 
//   Function overloading can be considered as an example of a polymorphism feature in C++.


#include<iostream>

using namespace std;

int add(int a, int b){      // if you specify here float a instead of int a, the program will run because we've specified return type of function -- int
    cout<<"Using function with 2 arguments"<<endl;          // so that respective float a will be converted into int.
    return a + b;
}

int add(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a + b + c;
}


// below lines we're overloading 3 functions
// to calculate the voulume of cylinder
int vol(double r, int h){
    return (3.14 * r * r * h);
}

// to calculate the volume of cube
int vol(int a){
    return (a * a * a);
}

// Rectangular box
int vol(int l, int b, int h){
    return (l * b * h);
}

int main()
{
    cout<<"The sum of 3 and 5 is"<<add(3,5)<<endl;
    cout<<"The sum of 4 and 2 and 5 is"<<add(4,2,5)<<endl; 

    cout<<"The volume of cylinder is "<<vol(8, 9)<<endl;
    cout<<"The volume of cube is "<<vol(10)<<endl;
    cout<<"The volume of rectangular box is "<<vol(3,4,5)<<endl;

    return 0;

}