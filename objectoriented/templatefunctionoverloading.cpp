// Member function Templates Overloading

#include <iostream>

using namespace std;

template <class T>

class lionel
{
public:
    int data;
    lionel(T a)
    {
        data = a;
    }

    // void display(){
    //     cout<<data;
    // }
    void display();
};

// defining template function outside class using scope resolution
template <class T>
void lionel<T>::display()
{
    cout << data << endl;
}

void funcn(int a)
{
    cout << "I am the first function" << a << endl;
}

// performing member function overloading
template <class T>
void funcn(T a)
{
    cout << "I am the templatized function" << a << endl;
}

template <class T>
void funcn1(T a)
{
    cout << "I am the templatized function - funcn1()" << a << endl;
}

int main()
{

    lionel<int> leo(34);

    cout << leo.data << endl;
    leo.display();

    funcn(56);  // exact match takes the highest priority, in this case this is the functio online 31
    // & to call templatized function, we've to specify it's datatype like below
    funcn <float> (23.97);
    return 0;
}