// Objects Memory Allocation in C++ ---

// The way memory is allocated to variables and functions of the class is different even though they both are from the same class.
// The memory is only allocated to the variables of the class when the object is created.
//  The memory is not allocated to the variables when the class is declared.

#include <iostream>

using namespace std;

class Shop
{
    int itemId[100]; // this is the example of how we can use arrays in class
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 1; };
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item " << counter  << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop store;
    store.initCounter();
    // for (int i = 0; i < 3; i++)
    // {
    //     store.setPrice();
    // }
    // or you can also call the setPrice() manually by writing like below
    store.setPrice();
    store.setPrice();
    store.setPrice();
    // instead of writing 3 lines, we just simply implementing for loop 3 times to call our setprice function
    store.displayPrice();
    return 0;
}