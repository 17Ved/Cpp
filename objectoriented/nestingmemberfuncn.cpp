// Nesting of member function ---
// A member function can call another member function of the same class directly without using the dot operator.
//  This is called as nesting of member functions.
//   You know that only the public members of a class can be accessed by the object of that class, using dot operator.

#include <iostream>
#include <string>

using namespace std;

class binary
{
    // private:             // by default members of classes are private
    string s;

public:
    void read(void);
    void checkbin(void);

    void onesc(void);
    void display(void);
};

void binary ::read(void)
{
   
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::checkbin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::onesc(void)
{ // checking all characters by implementing for loop, i.e. the characters are 0 & 1 or not
    checkbin();                          // by writing checkbin() function here, we're implementing nesting member function

    for (int i = 0; i < s.length(); i++) // we don't need to specify object for checkbin(),
                                         // it'll automatically get called by object which is linked to onesc() function.
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{ // iterating whole string to print our output
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i) << endl;
    }
}

int main()
{
    binary b;
    b.read();
    b.checkbin();           // if you specify checkbin() as private then, it'll not be accessible at this point. b.checkbin() line will not be valid then
    b.display();
    b.onesc();
    b.display();

    return 0;
}