// Maps are associative containers that store elements in a mapped fashion.
// Each element has a key value and a mapped value.
// No two mapped values can have the same key values.
// maps used to store values in key value pair.



#include<iostream>
#include<string>
#include<map>
using namespace std;



int main()
{
    map <string, int> marksmap;
    marksmap["Lionel"] = 90;
    marksmap["Neymar"] = 80;
    marksmap["Ronaldo"] = 50;

    //insert method 
    marksmap.insert({{"Mane", 79}, {"De Bruyne", 89}});
    
    
    // making iterator
    // as we know that we use (*iter) to get the value inside iterator
    map<string, int> :: iterator iter;
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    // we're pointing to key value pair by writing above line
    // on above line (*iter).first we're accessing 1st element i.e. ["Lionel"]
    // on above line (*iter).second we're accessing 2nd element i.e. 90

    // Size method
    cout<<"The size of marksmap is - "<<marksmap.size()<<endl;
    cout<<"The maximum size of marksmap is - "<<marksmap.max_size()<<endl;
    cout<<"The marksmap is empty or not - "<<marksmap.empty()<<endl;
    return 0;

}