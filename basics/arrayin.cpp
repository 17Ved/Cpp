#include<iostream>

using namespace std;

int main()
{

    // declaration of array and assigning and printing its values
    cout<<"Array values of marks variable"<<endl;
    int marks[4] = {23,45,32,56};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // you can also change value of an array element

    marks[3] = 89;
    cout<<marks[3]<<endl;


    // Another method to declare and assign values in an array
    cout<<"array values of mathmarks variable"<<endl;
    int mathmarks[4];
    mathmarks[0] = 90;
    mathmarks[1] = 70;
    mathmarks[2] = 20;
    mathmarks[3] = 50;

    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // Printing elements of array using for loop
    for (int i = 0; i < 4; i++)
    {
        cout<<"The values of mathmarks "<<i<<"is "<<mathmarks[i]<<endl;
    }
    

    //using while and do while loop
    // while 
    int j = 0;
    while (j < 4)
    {
        cout<<"The values of mathmarks var"<<j<<"is "<<mathmarks[j]<<endl;
        j++;
    }


    // do while
     int k = 0;
    do
    {
        cout<<"The values of mathmarks var" <<k<<"is"<<mathmarks[k]<<endl;
        k++;
    } while (k < 4);
    
    








    return 0;

}