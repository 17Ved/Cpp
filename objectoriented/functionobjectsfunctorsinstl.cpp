// Functors are objects that can be treated as though they are a function or function pointer.
// Function objects : function wrapped in a class so that it available like an object
// Function object is also known as Functor
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {89, 1, 23, 75, 5, 90 , 31};
    sort(arr, arr + 7);     // this'll sort in ascending order
    // greater<int>() is function object / functor    , & this'll in descending order    
    sort(arr, arr + 7, greater<int>()); 
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] <<endl;
    }

    return 0;
}