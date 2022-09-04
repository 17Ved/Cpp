// Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted,
// with their "storage being handled automatically by the container".
// Vector elements are "placed in contiguous storage" so that they can be accessed and traversed using iterators.
// "In vectors, data is inserted at the end". Inserting at the end takes differential time,
// as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens.
// "Inserting and erasing at the beginning or in the middle is linear in time".
// size is automatically gets managed in vectors

#include <iostream>
#include <vector> // including vector header file
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "displaying this vector";  // taking reference of int vector &v
    for (int i = 0; i < v.size(); i++) // v.size() - size of that vector / size - Return size (public member function)
    {
        cout << v[i] << "  ";
        // cout<<v.at(i);
    }

    cout << endl;
}

int main()
{
    // Ways to create a vector
    vector<int> vec1;        // declaring zero length integer vector - vec1
    vector<char> vec2(4);    // 4 element character vector
    vector<char> vec3(vec2); // 4 element character vector from vec2
    vector<int> vec4(4, 9);

    vec2.push_back('7');
    display(vec2);

    cout<<vec4.size()<<endl;
    display(vec4); // will print 9, 4 times 4 is length of element

    int element, size;
    cout << "Enter the size of your element"<<endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add this vector"<<endl;
        cin >> element;
        vec1.push_back(element); // function used to add element at the end
    }
    // vec1.pop_back();    // will del last element
    display(vec1);
    // insert method in vector --
    vector<int>::iterator iter = vec1.begin();
    // 'iter' is the iterator name for vector
    // we're using vec1.begin() - to point our iterator at the beginning of element
    // so the insert method will automatically add 466 at the beginning of vector
    // vec1.insert(iter, 466);
    vec1.insert(iter + 1, 6, 466); // this line will add iterator at the 2nd position (i + 1)
    // on above line - '6' is no. of copies you want to be inserted of value 466
    // this will print 466 - 6 times
    display(vec1);

    return 0;
}

// push_back -> Add element at the end (public member function)
// pop_back	 -> Delete last element (public member function)
// insert	 -> Insert elements (public member function)
// begin	 -> Return iterator to beginning (public member function)
// at	     -> Access element (public member function)