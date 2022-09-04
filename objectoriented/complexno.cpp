// This program will demostrate you the passing of objects as function arguments

#include <iostream>

using namespace std;

class complex
{

    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDatabySum(complex o1, complex o2)       // Here these two o1 and o2 are objects of complex class // formal arguments
    { // passing objects as function arguments
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printno()
    {
        cout << "Your complex no is " << a << " + " << b << " i " << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printno();

    c2.setData(3, 4);
    c2.printno();

    c3.setDatabySum(c1, c2); // passing objects as function arguments       // actual arguments of class complex
    c3.printno();
    return 0;
}