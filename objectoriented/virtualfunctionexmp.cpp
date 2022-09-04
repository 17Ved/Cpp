#include <iostream>
#include <cstring>
using namespace std;

class dev
{ // Base class
protected:
    string title;
    float rating;

public:
    dev(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
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

int main()
{
    // string title;
    // float rating, videolength;
    // int words;

    // For devvideo
    // title = "This is video tutorial";
    // videolength = 4.50;
    // rating = 4.5;
    devvideo tuto(" Video tutorial", 3.8, 6.35);
    tuto.display();

    cout << endl;
    // For devtext
    // title = "This is tutorial Text";
    // words = 876;
    // rating = 3.8;
    devtext devtxt(" Text tutorial", 5.0, 987);
    devtxt.display();
    cout << endl;

    // for virtual function
    cout<<"Calling display functions using virtual"<<endl;
    dev *tuts[2];
    tuts[0] = &tuto;
    tuts[1] = &devtxt;

    tuts[0]->display();
    cout << endl;
    tuts[1]->display();
    return 0;
}


// Rules for virtual functions -- 
// they cannot be static 
// they are access by object pointers
// virtual functions can be a friend of another class
// a virtual function in base class might not be used
// if a virtual function defined in the base class, 
// then there is a no necessity of redefining in the derived class