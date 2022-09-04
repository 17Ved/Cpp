#include <iostream>

using namespace std;

// forward declaration
class C2;

class C1
{
    int val;

public:
    void intdata(int a)
    {
        val = a;
    }

    void display(void)
    {
        cout << val << endl;
    }
    friend void swap(C1 &, C2 &);
};

class C2
{
    int val2;

public:
    void intdata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }
    friend void swap(C1 &, C2 &);
};

// calling by reference here (C1 & x, C2 & y)
void swap(C1 &x, C2 &y)
{

    int tmp = x.val;
    x.val = y.val2;
    y.val2 = tmp;
}

int main()
{

    C1 oc1;
    C2 oc2;

    oc1.intdata(34);
    oc2.intdata(41);
    swap(oc1, oc2);

    cout << "The values after swapping are ";
    oc1.display();
    cout << "The values after swapping are ";
    oc2.display();

    return 0;
}