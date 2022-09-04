// Control Structures are just a way to specify flow of control in programs. 
// Any algorithm or program can be more clear and understood if they use self-contained modules called as logic or control structures. 
//  It basically analyzes and chooses in which direction a program flows based on certain parameters or conditions.
// There are three basic types of logic, or flow of control, known as:

// Sequence logic, or sequential flow
// Selection logic, or conditional flow
// Iteration logic, or repetitive flow

#include<iostream>
using namespace std;

int main()
{

    // Selection logic, or conditional flow - ifelse, ifelse ladder, switch case statement
    int age; 
    cout<<"tell me your age first";
    cin>>age;


    // if(age<20 && age>0){
    //     cout<<"you cannot come to party"<<endl;
    // }
    // else if(age==20){
    //     cout<<"You can go to kids party"<<endl;
    // }
    // else if(age<=0){
    //     cout<<"You are not born yet"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }
    

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;

    case 22:
        cout<<"You are 22"<<endl; 
        break;

    case 30:
        cout<<"You are 30"<<endl; 
        break;
    
    default:
        cout<<"No special cases available"<<endl;
        break;
        
    }

    cout<<"You are done with switch case"<<endl;

    return 0;
}
