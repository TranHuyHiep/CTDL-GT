#include<bits/stdc++.h>
using namespace std;
template <typename T>
class myList : public std::list<T>
{   
public:
//    typedef T value_type;
//    typedef const T const_value_type;
//    typedef value_type& reference;
//    typedef const_value_type& const_reference;
//    typedef value_type* pointer;
//    typedef const_value_type* const_pointer;

    typedef std::list<T> base_container;
    typedef typename base_container::iterator iterator;
    typedef typename base_container::const_iterator const_iterator;

    void foo () 
    { 
        iterator it; // easy peasy
    }
};
