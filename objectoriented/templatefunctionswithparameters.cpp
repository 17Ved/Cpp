// Function templates with parameters

#include <iostream>

using namespace std;

// float funcAvg(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
// float funcAvg2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }

// creating templates and passing it to function funAvg2()
template <class T1, class T2>
float funcAvg2(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T> // here we're making swapping function template
int swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = funcAvg2(5, 2.89);
    cout << "The average of these nos is" << a << endl;

    // for swapp()
    int x = 3, y = 8;
    swapp(x, y);
    cout << x << endl
         << y;
    return 0;
}