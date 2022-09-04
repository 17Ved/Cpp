#include<iostream>

using namespace std;

class complex{
    int a, b;

    public: 
        complex(){          // default constructor that has value zero
            a = 0;
            b = 0;
        }

        complex(int x, int y){
            a = x;
            b = y;
        }

// one class can have more than one constructor, and we call this constructor overloading


        complex(int x){             // overloading constructor here 
            a = x;
            b = 0;
        }
    

        void printData(){
            cout<<"The values of a, b are "<<a<<" and "<<b<<endl;
        }

};



int main()
{
    complex c1(2, 9);   // parameter
    c1.printData();

    complex c2(6);      // parameter
    c2.printData();

    complex c3;     // default
    c3.printData();

    return 0;

}