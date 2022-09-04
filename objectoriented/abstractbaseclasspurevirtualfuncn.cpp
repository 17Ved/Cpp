#include <iostream>
#include <cstring>
using namespace std;

class dev
{ // Base class         // Abstract base class
protected:
    string title;
    float rating;

public:
    dev(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0;  // do-nothing function -- pure virtual function 
    // we must override this virtual display() further in drived classes of base class
};

class devvideo : public dev
{
    float videolength;

public:
    devvideo(string s, float r, float vl) : dev(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is a video with title" << title << endl;
        cout << "Ratings : " << rating << " Out of 5 stars" << endl;
        cout << "Length of this video is  " << videolength << " Min " << endl;
    }
};

class devtext : public dev
{
    int words;

public:
    devtext(string s, float r, int wc) : dev(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an video with title - " << title << endl;
        cout << "Ratings : " << rating << " Out of 5 stars" << endl;
        cout << "No of words in this text tutorial is  " << words << endl;
    }
};

#include <iostream>

using namespace std;

int main()
{

    devvideo tuto(" Video tutorial", 3.8, 6.35);
    devtext devtxt(" Text tutorial", 5.0, 987);
    cout << "Calling display functions using virtual" << endl;
    dev *tuts[2];
    tuts[0] = &tuto;
    tuts[1] = &devtxt;

    tuts[0]->display();
    cout << endl;
    tuts[1]->display();
    return 0;
}

// pure virtual function in cpp
// A pure virtual function (or abstract function) refer to line - 17, in C++ is a virtual function for 
// which we can have implementation, But we must override that function in the derived class,
//  otherwise the derived class will also become abstract class

// Abstract base class
// Sometimes implementation of all function cannot be provided in a base class because we don’t know the implementation.
// Such a class is called abstract class.
// abstract base class have minimum one pure virtual function