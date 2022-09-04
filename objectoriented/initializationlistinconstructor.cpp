// Initialization list in constructor in C++ ---



#include<iostream>

using namespace std;
/*
Syntax for initialization list in constructor --
constructor(arguments) : initialization-section
{
    assignment + other code;
}
for example --
class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j)  // this line explains that
                // a = i and b = j
}
*/

class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){    // u can also perform some operation in this line like
        // Test(int i, int j) : a(i), b(i + j)      this will give value of i + j = b
        // Test(int i, int j) : a(i), b(2 * j)      this will give value of 2 * i = b 
        // Test(int i, int j) : a(i), b(a + j)      this line is also valid, value will be a + j = b
        // Test(int i, int j) : b(j), a(i + b)  this line is not valid
        // 'cause we've declared int a first & then b, so it'll initialize 'a' first, will throw error
            cout<<"Constructor executed"<<endl;
            cout<<"value of a is "<<a<<endl;
            cout<<"value of b is "<<b<<endl;
        }
};



int main()
{
    Test tes(12,78);
    return 0;

}