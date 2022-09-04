// Array of objects using pointers in C++ ---
#include <iostream>

using namespace std;

class shopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << " Code of this item is " << id << endl;
        cout << " Price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    shopItem *ptr = new shopItem[size]; // here our *ptr pointer variable is storing the address of shopItem object
    shopItem *ptrTemp = ptr;
    // Now by using for loop we'll be able to access the objects of shopItem class,
    // i.e. total shopItem[size] = 3
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id & price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q); // we can also write this line as below line
        // (*ptr).setData(p, q);
        ptr++;
    }

    for (int j = 0; j < size; j++)
    {
        cout << "Item number " << j + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}