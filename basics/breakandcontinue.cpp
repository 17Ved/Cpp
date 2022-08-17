#include <iostream>

using namespace std;

int main()
{

    // For loop for continue statement
    // for (int i = 0; i <= 10; i++)
    // {

    //     cout << i << endl;
    //     if (i == 5)
    //     {
    //         break;       // will print till 4 and then break it there
    //     }
    // }



    // for loop for continue statement.

    for (int i = 0; i < 10; i++)
    {
       if(i == 5){
        continue;       // will print till 4 and will skip 5 and continue printing next character.
       }
       cout<<i<<endl;
    }
    

    return 0;
}

// Break and continue are same type of statements which is specifically used to
// alter the normal flow of a program still they have some difference between them.

// break statement: the break statement terminates the smallest enclosing loop (i. e., while, do-while, for or switch statement)

// continue statement: the continue statement skips the rest of the loop statement and causes the next iteration of the loop to take place.