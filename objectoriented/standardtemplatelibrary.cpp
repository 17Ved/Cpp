// Standard Template Library
// The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc.
// It is a library of container classes, algorithms, and iterators.
// It is a generalized library and so, its components are parameterized.
// STL - is library of generic classes and functions

// why we use STL -
// to resuse - well tested components
// saves time

// 4 - components of STL -
// 1. Containers -> object which stores data, ex. vector
// 2. Algorithms -> set of procedure to manipulate data like - sort, search, etc. use template functions
// 3. Iterators  -> object which points to an element in a containers, handles just like pointers, connects algorithms with containers
// 4. Functions


/* Types of containers - 
1. Sequence containers -> linear fashion ex. - vector, list, deque, array, forward list
2. Associative containers -> direct access ex. - treee - set / multiset, map / multimap 
3. Derived containers -> real world modelling ex. - stack, queue, priority queue


* sequence containers - 
1. vector - Random Acess - fast
            insertion - slow
            insertion at the end - fast

2. list - Random Access - slow
          insertion in middle - fast
          insertion at the end - fast


* associative containers - 
All operations are fast in associative container except Random Access

* derived containers -
depends -> on data structures
*/ 