#include <iostream>

using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int a, int b = 9)        // constructor with default arguments
                            // on above line we're setting default argument value for int b = 9;
    {
        data1 = a;
        data2 = b;
    }

    void printData()
    {
        cout << "The values of data1 and data2 is"<< data1<<" and "<<data2<<endl;
    }
};

int main()
{
    simple s(1, 8);     // if we don't provide the value for 2nd argument here like on below line(27)
    // then the default value that we've set will print , refer to line 11, so 9 will get print.
    simple s(1);        // value 9 will get print for data2
    s.printData();

        return 0;
}