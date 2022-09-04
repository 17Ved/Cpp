// Following is an example of single inheritance -

#include<iostream>

using namespace std;


// base class
class Base{
    int data;          //private by default & is not inheritable

    public:
        int data2; 
        void setData();
        int getData1();
        int getData2();
};

void Base :: setData(void){
    data = 10;
    data2 = 17;
}

int Base :: getData1(){
    return data;
}

int Base :: getData2(){
    return data2;
}


// Derived / Child Class inherited from Base class
class Derived : public Base{            // visibility mode public 
    int data3;
    public:
        void process();
        void display();


};

void Derived :: process(){
    // data3 = data2 * data;       // if we write process() like this, it'll throw error, 'cause we're accessing the private member of Base clas "data".
    // so to solve the above problem we'll call the function in which the data is stored
    // so the following line will be totally valid
    data3 = data2 * getData1();

}


void Derived :: display(){
    cout<<"Value of data is"<<getData1()<<endl;
    cout<<"Value of data2 is"<<data2<<endl;
    cout<<"Value of data3 is"<<data3<<endl;
}



int main()
{

    Derived der;            // we can create object of derived class and can call the function of base class
    der.setData();          // on this line we're doing the above operation

    der.process();
    der.display();

    return 0;

}