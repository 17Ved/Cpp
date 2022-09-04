#include<iostream>

using namespace std;

int sum = 1234;

int main(){

    int a = 10; 
    int b = 89;

    cout<<"Hello this is value of a:- "<<a <<" \nHello this is value of b:-" <<b;


    float c = 5.17;
    cout<<"\nThe value of float variable c:-"<<c;

    char d = 'L';
    cout<<"\ncharacter inside variable d :-"<<d;

    int sum = 124;                          // Local vairable will always precede over global variable while declaring it.
    cout<<"\nvalue of sum is "<<sum;

    bool is_false = false;
    cout<<"\nvalue of this boolean function is "<<is_false;

    return 0;
}

