#include<iostream>

using namespace std;

// inline int product(int a, int b){      
//     return a*b;
// }

int product(int a, int b){
    static int c=0; // This line executes only once
    c = c + 1;      // Next time when this function will run, the value of c will be retained/keep 
    return a*b+c;   // don't use inline fucn with static 
}

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}



int main()
{
    int a, b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have"<<money<<"Rs in your bank account, you will receive"<<moneyReceived(money)<<"Rs after 1 year"<<endl;
    cout<<"If your're VIP and have"<<money<<"Rs in your bank, you will receive"<<moneyReceived(money, 1.1)<<"Rs after 1 year"<<endl;
    // On above line we're overriding the default/argument value of second formal argument in function moneyReceived by entering (1.1)


    const int var = 17;
    cout<<var;
    return 0;

}


// Inline function in cpp --
// If a function is inline, the compiler places a copy of the code of that function at each point where the function is called at compile time.
//Any change to an inline function could require all clients of the function to be recompiled because compiler would need to replace all the 
//code once again otherwise it will continue with old functionality.
// use inline function for only those functions which are too small
// while doing recursion don't implement inline function
// also don't use static variable in inline function




// Static variable in c++
// Static keyword has different meanings when used with different types. We can use static keyword with:
// Static Variables : Variables in a function, Variables in a class
// Static Members of Class : Class objects and Functions in a class




// Default arguments in cpp --
// A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for the argument. 
// In case any value is passed, the default value is overridden. 
// default arguments should be on extreme right side, don't declare your default arguments at the starting, it'll give you an error.




// Whenever const keyword is attached with any method(), variable, pointer variable, and with the object of a class it prevents that specific object/method()/variable to modify its data items value.
// Constant Variables:
// There are a certain set of rules for the declaration and initialization of the constant variables:

// The const variable cannot be left un-initialized at the time of the assignment.
// It cannot be assigned value anywhere in the program.
// Explicit value needed to be provided to the constant variable at the time of declaration of the constant variable.
// syntax to decalre const var -- const int var = 32;      // valid statement to decalre const
// const int var;
// const in var
// var =32;         THE ABOVE 3 LINES ARE INVALID DECALRATION OF CONST  