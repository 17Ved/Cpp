#include <iostream>

using namespace std;

int main()
{

    // Basic Example of pointer
    int a = 4;
    int *ptr = &a;
    cout << " Address of a is " << ptr << endl;
    cout << " The value of a is " << *(ptr) << endl; // dereferencing ptr, i.e. getting value at ptr

    // new keyword/operator
    // using new keyword we're creating int dynamically
    // & value of that int is 56
    int *p = new int(56);
    cout << " The value of at address p is " << *(p) << endl; // dereferencing ptr, i.e. getting value at ptr


    // allocating block of memory - ontiguous block of memory
    int *arr = new int[4];
    arr[0] = 23;
    arr[1] = 67;
    // we can also write arr[1] = 20 as
    *(arr + 1) = 34;
    arr[2] = 89;
    arr[3] = 12;
    // delete arr;
    // delete [] arr;          // dynamically releasing complete array
    cout<<" The value of arr[0] is : "<<arr[0]<<endl;
    cout<<" The value of arr[1] is : "<<arr[1]<<endl;
    cout<<" The value of arr[2] is : "<<arr[2]<<endl;
    cout<<" The value of arr[3] is : "<<arr[3]<<endl;


    // delete keyword/operator

    return 0;
}