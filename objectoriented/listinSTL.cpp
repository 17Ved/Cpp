// Lists are sequence containers that allow non-contiguous memory allocation.
// As compared to vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick.
// Normally, when we say a List, we talk about a doubly linked list. For implementing a singly linked list, we use a forward list.

// Compared to other base standard sequence containers (array, vector and deque),
// lists perform generally better in inserting, extracting and moving elements in any position within the container for which an iterator has already been obtained,
// and therefore also in algorithms that make intensive use of these, like sorting algorithms.

#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // list of zero length

    list1.push_back(3);
    list1.push_back(2);
    list1.push_back(1);
    list1.push_back(8);

    // making iterator
    // list <int> :: iterator iter;
    // iter = list1.begin();       // 1st element
    // cout<< *iter;
    // iter++;

    // Removing elements from the list
    display(list1);
    // list1.pop_back();
    // list1.pop_front(); // will pop out first element
    // display(list1);
    // list1.remove(2); // will remove value 2 & all occurences of value 2
    // display(list1);

    // sorting the list
    list1.sort();
    display(list1);

    // Reversing the list
    list1.reverse();
    display(list1);



    list<int> list2(4); // empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 12;
    iter++;
    *iter = 89;
    iter++;
    *iter = 90;
    iter++;

    list2.sort();
    // merging list1 and list2
    list1.merge(list2);
    cout<<"after merging "<<endl;
    display(list1);
    display(list2);
    return 0;
}