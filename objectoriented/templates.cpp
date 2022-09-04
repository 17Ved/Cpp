// A template is a simple yet very powerful tool in C++.
// The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types.
// For example, a software company may need to sort() for different data types.
// Rather than writing and maintaining multiple codes, we can write one sort() and pass data type as a parameter.
// C++ adds two new keywords to support templates: ‘template’ and ‘typename’. The second keyword can always be replaced by the keyword ‘class’.
// templates are also called parameterized classes
// why use templates -
// to perform dry principles (do not repeat)
// generic programming

/* syntax for templates --
 template <class T>    -- here T can be int, float, char, etc.
 class vector{
  T * arr;
  public:
    vector(T * ar){
        code
    }
    other methods here

 };

int main(){
    vector <int> myvec(ptr);
    vector <float> myfvec(ptr);
}

Now here our vector class is not just one class
it is representing many other classes of types -  int, float

This concept (STL) is most used in competitive programming

*/

#include <iostream>

using namespace std;

template <class T> // which datatype we're going to use, will be specified in int main()
class vector
{
public:
    T *arr; // making int pointer
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T sumVec(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    // vector v1(3);
    // v1.arr[0] = 4;
    // v1.arr[1] = 84;
    // v1.arr[2] = 49;

    // vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 5;

    // int a = v1.sumVec(v2);
    // cout<<a<<endl;
    // return 0;

    // now we're using template below, by specifying vector class datatype as float
    vector<float> v1(3);
    v1.arr[0] = 4.3;
    v1.arr[1] = 84.1;
    v1.arr[2] = 49.9;

    vector<float> v2(3);
    v2.arr[0] = 1.7;
    v2.arr[1] = 0.5;
    v2.arr[2] = 5.3;

    float a = v1.sumVec(v2); // will give exact sum of sumVec() in float
    cout << a << endl;

    // we can also do the above template operation by specifying different datatypes like double, int , float etc.
    return 0;
}