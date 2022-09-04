// Pointers to objects and Arrow operator in C++ ---
#include <iostream>

using namespace std;

class complex
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << " the real part is " << real << endl;
        cout << " The imaginary part is " << imaginary << endl;
    }

    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{

    // complex c1;
    // complex *ptr = &c1; // on this line, we're accessing the public members of object c1 using pointer variable *ptr
    complex *ptr = new complex; // this is also one way to create object of complex class
    // (*ptr).setdata(12, 83); // is exactly same as below line using arrow operator
    ptr->setdata(12, 83); // using arrow operator

    // (*ptr).getdata();   // is similar as below line
    ptr->getdata(); // using arrow operator

    // Array of objects
    complex *ptr1 = new complex[3]; // we can access these array of objects by incrementing them
    ptr1->setdata(23, 64);
    ptr1->getdata();
    return 0;
}