// Dynamic initialization of objects using constructors in C++
// Dynamic initialization of object refers to initializing the objects at a run time i.e., the initial value of an object is provided during run time.
// It can be achieved by using constructors and by passing parameters to the constructors.
// This comes in really handy when there are multiple constructors of the same class with different inputs.

// dynamic constructor
// The constructor used for allocating the memory at runtime is known as the dynamic constructor.
// The memory is allocated at runtime using a new operator and similarly, memory is deallocated at runtime using the delete operator.

#include <iostream>

using namespace std;

class Bankdeposit
{
    int principal;
    int years;
    int interest;
    float returnvalue;

public:
    Bankdeposit(){};
    Bankdeposit(int p, int y, float r); // r will be value like -- 0.04
    Bankdeposit(int p, int y, int r);   // r can be value like 40

    void show();
};

Bankdeposit ::Bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interest = r;

    returnvalue = principal;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interest);
    }
}

Bankdeposit ::Bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interest = float(r) / 100;

    returnvalue = principal;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interest);
    }
}

void Bankdeposit ::show()
{
    cout << "Principal amount was" << principal << endl
         << "Return value after" << years << " is " << returnvalue << endl;
}

int main()
{
    Bankdeposit bd1, bd2, bd3;
    int p, y;
    float r; // output will be in float
    int R;   // output will be in int

    bd3.show();

    cout << "Enter the value of p, y and r " << endl;
    cin >> p >> y >> r;
    bd1 = Bankdeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y and R " << endl;
    cin >> p >> y >> R;
    bd2 = Bankdeposit(p, y, R);
    bd2.show();

    return 0;
}