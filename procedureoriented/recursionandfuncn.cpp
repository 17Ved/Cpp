// what is recursion ?
// The process in which a function calls itself directly or indirectly is called recursion 
// and the corresponding function is called a recursive function.
// A recursive function solves a particular problem by calling a copy of itself and solving smaller subproblems of the original problems.
// Recursion is an amazing technique with the help of which we can reduce the length of our code and make it easier to read and write.

// Properties of Recursion:

// 1. Performing the same operations multiple times with different inputs.
// 2. In every step, we try smaller inputs to make the problem smaller.
// 3. Base condition is needed to stop the recursion otherwise infinite loop will occur.



#include<iostream>

using namespace std;



// below function for factorial to understand the recursion
// int factorial(int n){
//     if (n <= 1){
//         return 1;
//     }
//     return n * factorial(n -1);
// }

// step by step calculation of factorial (4)
// factorial(4) = 4 * factorial(3);
// factorial(4) = 4 * 3 * factorial(2);
// factorial(4) = 4 * 3 * 2 * factorial(1);
// factorial(4) = 4 * 3 * 2 * 1;
// factorial(4) = 24;




// below function for fibonacci to understand the recursion
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);

}





int main() 
{
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    // cout<<"factorial of"<< a << "is"<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<< a << "is 4"<<fib(a)<<endl;
    return 0;


}