#include<iostream>
#include<fstream>       // this include file is necessary to perform input and output
using namespace std;

int main()
{
    string st = "sample text";
    string st2;
    // opening files using constructor and writing it
    ofstream out("samplereadwritefile.txt");
    out<<st;
    // here ofstream class and its object 'out' will help us to 
    // perform the write operation
    // so out<<st will write into out file and will replace old content with st = "sample text"

    // opening file using constructor and reading it
    ifstream in("sample2.txt");
    // in>>st2;         // using only this line will give us the only first word of our sample file
    getline(in, st2);
    // using getline() we can access the whole line in our sample file
    cout<<st2;
    // here ifstream class and its object 'in' will help us to 
    // perform the read operation from sample2.txt file
    return 0;

}

// The I/O system of C++ contains a set of classes which define the file handling methods.
// These include ifstream, ofstream and fstream classes.
// These classes area derived from fstream and from the corresponding iostream class.
// These classes, designed to manage the disk files, are declared in fstream and therefore we must include this file in any program that uses files.

// The useful classes for working with files in C++ are
// 1. fstreambase
// 2. ifstream  --> derived from fstreambase 
// 3. ofstream  --> derived form fstreambase

// In order to work with files in C++, you'll have to open it
// Primarily there are 2 ways to open a file -->
// 1. using the constructor
// 2/ using the member function open() of the class

// getline() in cpp
// The C++ getline() is a standard library function that is used to read a string or a line from an input stream.