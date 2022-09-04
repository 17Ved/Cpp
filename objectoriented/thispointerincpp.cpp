// This pointer in C++ --
#include <iostream>

using namespace std;

class A
{
    int a;

public:
    // void setdata(int a)
    // {
    //     this->a = a; // we always use arrow -> on pointers
    // }                // in this function we're using this pointer explicitly

    // void setdata(int a1)
    // {
    //     a = a1; // we were using this pointer implicitly by
    // }           // writing our function like this
    
    A& setdata(int a){
        this->a = a;
        return *this;
    }
    
    
    void getdata(void)
    {
        cout << "the value of a is" << a << endl;
    }
};
int main()
{
    A a;
    a.setdata(3);
    a.setdata(64).getdata();
    a.getdata();
    return 0;
}

// this keyword in cpp
// 'this' is a keyword which is a pointer which points to the object which invokes the member function