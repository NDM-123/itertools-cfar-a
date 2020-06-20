#ifndef ITERTOOLS_CFAR_A_MASTER_ACCUMULATE_HPP
#define ITERTOOLS_CFAR_A_MASTER_ACCUMULATE_HPP

#pragma once
#include <iostream>
#include <vector>

using namespace std;
namespace itertools{

typedef class{		//plus function
        template <typename T>
        T operator ()(T a, T b) const{
            return a+b;
        }
    } plus;


template  <typename T,typename Func = plus>
class accumulate{
public:
    T _container;		//data structure
     Func function;		//lambda function


	//Init List
    accumulate(T container,Func func=plus()):_container(container),function(func){}

class iterator{
public:

    typename T::iterator iter;  
    decltype(*(_container.begin())) _data;
    int count;
    Func function;

	//init list
    explicit iterator(typename T::iterator _iter,Func func):iter(_iter),_data(*iter),count(0),function(func) {}    

    bool operator !=(const iterator& other){	//different than end
        return other.iter != iter;
    }

    auto operator *(){		//derefrencing the value

        return _data;

    }

    iterator& operator ++() {		//moving iterator
        ++iter;
        return *this;
    }

};

	//retrieve begin and end values for the iterator
    iterator begin(){return iterator(_container.begin(),function);
    }

    iterator end(){return iterator(_container.end(),function);
    }



};

}
#endif
