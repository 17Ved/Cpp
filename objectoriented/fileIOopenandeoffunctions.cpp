#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // creating out object of ofstream class and opening the file
    // using out.open("filename");
    ofstream out;
    out.open("sampletst.txt");

    // writing into file using object
    out<<"This is me performing operations";
    // it is good practice to close the file after writing into it.
    out.close();



    ifstream in;
    string st;
    in.open("sampletst.txt");
    in>>st;
    cout<<st;
    // while loop - to read all of the text inside file
    // eof - end of file
    while (in.eof() == 0)
    {
      getline(in, st);
      cout<<st<<endl;
    }
    


    in.close();
    return 0;

}