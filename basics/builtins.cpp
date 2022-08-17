#include<iostream>
using namespace std;

int c = 40;
int main(){

    int a, b, c;

    cout<<"Enter value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;
    
    c = a+b;
    cout<<"Sum of a and b is"<<c<<endl;     // on this line the local variable c will take precedence and will print sum of a and b
    cout<<"Sum of a and b is"<<::c<<endl;   // but on this line we're applying :: scope resolution operator before var c, so it'll print the global val of c i.e. 40


    float d = 17.10F;        // By default in cpp the float will be considered as double datatype
    long double e = 17.10L;  // so for removing this by default, we've to specify 'f' or 'l' for specific datatype i.e. double or long double

    
    cout<<"The value of d is "<< d <<endl <<" The value of e is" << e << endl;

    // Now to print the size of these datatypes we've sizeof() in cpp

    float g = 10.7;
    long double t = 10.7;

    cout<<"The size of 10.7 is: "<<sizeof(10.7)<<endl;
    cout<<"The size of 10.7 is: "<<sizeof(10.7f)<<endl;
    cout<<"The size of 10.7 is: "<<sizeof(10.7F)<<endl;
    cout<<"The size of 10.7 is: "<<sizeof(10.7l)<<endl;
    cout<<"The size of 10.7 is: "<<sizeof(10.7L)<<endl;








}