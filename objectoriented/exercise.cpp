#include <iostream>
#include <cmath>

using namespace std;

// simple calculator class
class simplecalc
{
    int a, b;

public:
    void getdatasimp();
    void performop();
};

void simplecalc ::getdatasimp()
{
    cout << "Enter any 2 no to perform simple operations" << endl;
    cin >> a >> b;
}

void simplecalc ::performop()
{
    cout << "The value of a & b after + is" << a + b << endl;
    cout << "The value of a & b after - is" << a - b << endl;
    cout << "The value of a & b after * is" << a * b << endl;
    cout << "The value of a & b after / is" << a / b << endl;
}

// scientific calculator class
class scientific
{
    int e, f;

public:
    void getdatascin();
    void process();
};

void scientific ::getdatascin()
{
    cout << "Enter any 2 no to perform scientific operation" << endl;
    cin >> e >> f;
}

void scientific ::process()
{
    cout << "The value of cos a & b after  is" << cos(e) << endl;
    cout << "The value of sin a & b after  is" << sin(e) << endl;
    cout << "The value of exp a & b after  is" << exp(e) << endl;
    cout << "The value of tan a & b after  is" << tan(e) << endl;
}

class hybrid : public simplecalc, public scientific
{

};

int main()
{
    hybrid calc;
    calc.getdatasimp();
    calc.performop();

    calc.getdatascin();
    calc.process();

    return 0;
}