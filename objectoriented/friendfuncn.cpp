// Friend Function in C++ ---->

// Friend Function Like friend class, a friend function can be given a special grant to access private and protected members.
//      A friend function can be: 
// a) A member of another class 
// b) A global function 


// IMP Points to remember while declaring friend function

//  A friend function is a special function in C++ which in-spite of not being member function of a class has privilege to access private and protected data of a class.

// A friend function is a non member function or ordinary function of a class, which is declared as a friend using the keyword “friend” inside the class.
//  By declaring a function as a friend, all the access permissions are given to the function.

// The keyword “friend” is placed only in the function declaration of the friend function and not in the function definition.

// When friend function is called neither name of object nor dot operator is used. However it may accept the object as argument whose value it want to access.

// Friend function can be declared in any section of the class i.e. public or private or protected..




// Properties of friend function
// 1. Not in the scope of class, means that friend function can only access the private data members of the class.
// 2. Since it is not in the scope of the class, it cannot be called from the object of that class, so c1.sumNumber() statement will be invalid
// 3. Can be invoked without the help of any object.
// 4. Usually contains objects as its arguments.
// 5. can be declared inside private or public section of the class.
// 6. It cannot access the members directly by their names and need object_name.member_name to access any member


#include<iostream>

using namespace std;

// some info about complex numbers
// Complex numbers are the numbers that are expressed in the form of a+ib where, a,b are real numbers and 'i' is an imaginary number called “iota”
// complex number example

// 1 + 4i
// 5 + 8i
//----------
// 6 + 12i 
 
class complex{

    int a, b;

    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }


        // below line means that non member - sumComplex function is allowed to anything with my private parts😂
        // sumComplex is non member function of class complex
        friend complex sumComplex(complex o1, complex o2);

        void printNumber(){
            cout<<"Your number is " << a << " + " << b << " i "<<endl;
        }
};

complex sumComplex(complex o1, complex o2){      // on this line the sumNumber function is trying to access the private data memeber of class 'complex'.i.e. 'a' and 'b'
    complex o3;

    o3.setNumber((o1.a + o2.a) , (o1.b + o2.b));    // so this line will be invalid and throw error definitely
    return o3;
}

// so to solve the above problem, we need to specify the sumComplex a friend function of class 'complex', we're doing that on line 48, refer to line 48



int main()
{
    complex c1, c2, sum;

    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();



    return 0;

}