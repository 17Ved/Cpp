#include<iostream>

using namespace std;

int main()
{

//------------------------------------------------------
    // For loop syntax

    // for(initialization; condition; updation){
//              loop body(c++ code);
    //}

    // for(int i = 1; i <= 100; i++){
    //     cout<<i<<endl;
    // }

    // Example of infinite loop
    // for (int i = 1; i < 34 <= 40 ; i++)
    // {
    //     cout<<i<<endl;
    // }
    

// ----------------------------------------------------

// While loop syntax
    // while(condition):
    // {
    //         c++ statements;
    // }

    // int j = 0;
    // while(j <= 40){
    //     cout<<j<<endl;
    //     j++;
    // }


    // Infinite while loop

    // int v = 1;
    // while(true){
    //     cout<<v<<endl;
    //     v++;
    // }

//-------------------------------------------------------


// do while loop

int y = 1;
do{
    cout<<y<<endl;
    y++;
}while(y <=20);
    
    return 0;
}




/*In programming, sometimes there is a need to perform some operation more than once or (say) n number of times. 
Loops come into use when we need to repeatedly execute a block of statements. 


There are mainly two types of loops:  

Entry Controlled loops: In this type of loop, the test condition is tested before entering the loop body.
                        For Loop and While Loop is entry-controlled loops.


Exit Controlled Loops: In this type of loop the test condition is tested or evaluated at the end of the loop body. 
                       Therefore, the loop body will execute at least once, irrespective of whether the test condition is true or false. 
                       the do-while loop is exit controlled loop.
*/