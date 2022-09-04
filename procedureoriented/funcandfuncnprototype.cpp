#include<iostream>

using namespace std;

// Function prototype
// type function-name (arguments);

int sum(int a, int b);          // This is function prototype
// int sum(int, int);   // This line is also acceptable while declaring function prototype

// The above line is telling compiler that function named as sum() will come in program
// so be ready for it.;

void gm(void);  // or
// void gm();

int main()
{
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1,
    cout<<"Enter second number"<<endl;
    cin>>num2;

    // Here num1 and num2 are actual parameters
    cout<<"Sum of num1 and num2 is "<<sum(num1, num2);
    gm();
    return 0;

}   


int sum(int a, int b){

    // Here formal parameters a and b are taking values  from actual parameters num1 and num2
    int c = a + b;
    return c;

}

void gm(){
    cout<<"Hello good morning"<<endl;
}


// The Function prototype serves the following purposes – 
// 1) It tells the return type of the data that the function will return. 
// 2) It tells the number of arguments passed to the function. 
// 3) It tells the data types of each of the passed arguments. 
// 4) Also it tells the order in which the arguments are passed to the function.
// Therefore essentially, the function prototype specifies the input/output interlace to the function i.e. what to give to the function and what to expect from the function.
// The prototype of a function is also called the signature of the function.




// Formal parameters are parameters which we create in function 
// just like int a and int b in function sum()


// actual parameters are parameters which we pass to a function in main function 
// just like num1 and num 2 in main function <<sum(num1, num2)