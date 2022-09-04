#include<iostream>

using namespace std;
/*
syntax for templates with multiple parameters

template <class T1, class T2>
class nameofClass{
    body
};

*/
// class templates with multiple parameters, can be 2 or 3 or 4 (seperated by comma)
template <class T1, class T2>   // now here we're specifying template withh multiple parameters T1 & T2
// & the value or datatype for this T1 &T2 will be specified while creating object
class myclass{
    public:
        T1 data1;
        T2 data2;
            myclass(T1 a, T2 b){
                data1 = a;
                data2 = b;
            }
            void display(){
                cout<<this->data1<<endl<<this->data2<<endl;
            }

};
int main()
{
    myclass<int, char> obj(34, 'V');        // specifying datatype for template T1 & T2
    myclass<int, float> obj2(34, 3.98);
    obj.display();
    obj2.display();
    return 0;

}