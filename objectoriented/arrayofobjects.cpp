// Array of Objects & Passing objects as Function arguments in C++

// Syntax - ClassName ObjectName[number of objects];
// The Array of Objects stores objects. An array of a class type is also known as an array of objects.





#include<iostream>

using namespace std;

class Employee{
    int id;
    int salary;

    public:
        void setId(void){
            salary = 120;
            cout<<"Enter id of employee"<<endl;
            cin>>id;
        }

        void getId(void){
            cout<<"The id of this employee is "<<id<<endl;

        }

};

int main()
{   
    // Employee vedant, mayur, rushi, jay;
    // vedant.setId();
    // vedant.getId();

    Employee company[4];                    // from this line we're creating array of objects, and calling function using for loop
    for (int i = 0; i < 4; i++)
    {
        company[i].setId();
        company[i].getId();

    }
    



    return 0;

}




