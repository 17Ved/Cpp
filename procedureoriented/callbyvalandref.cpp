#include<iostream>

using namespace std;

int sum(int a , int b){
    int c = a + b;
    return c;
}


// This will not swap a and b
void swapn(int a, int b){
    int temp = a;
    a = b;
    b = temp;

}

// To swap a and b we will use pointer
// This is the example of call by reference using pointers
void swapointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


// To swap a and b using reference variables

void swapbyref(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

 


int main()
{
    int x = 5, y = 3;
    cout<<"The sum of a and b is "<<sum(34,32)<<endl;
    cout<<"Nos before swapping variables"<<x<<"\t"<<y<<endl;
    swapn(x, y);    // This will not swap a and b      -- call by value (won't work with swapping of nos)
    swapointer(&x, &y);     // This will swap a and b   -- call by reference
    swapbyref(x, y);            // This will swap a and b using reference variable
    cout<<"Nos after swapping variables"<<x<<"\t"<<y<<endl;
    return 0;

}



// Pass by Value: In this parameter passing method, values of actual parameters are copied to the function’s formal parameters and the two types of parameters are stored in different memory locations. 
//             So any changes made inside functions are not reflected in the actual parameters of the caller. 
 
// Pass by Reference: Both actual and formal parameters refer to the same locations, so any changes made inside the function are actually reflected in the actual parameters of the caller.
