#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    // Connecting our file with vout stream

    ofstream vout("sampletst.txt");
    
    // creating a name string and filling it with the string entered by the user
    cout<<"Enter your name";
    string name;
    cin>>name;
    vout<<name;

    // writing a string to the file
    vout<<"My test is - " + name;

    // closing the file
    vout.close();


    ifstream vin("sampletst.txt");
    string content;
    vin>>content;
    cout<<"The content of this file is"<<content;
    return 0;

}