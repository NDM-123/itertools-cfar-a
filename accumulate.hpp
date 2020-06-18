#pragma once
#ifndef ITERTOOLS_CFAR_A_MASTER_ACCUMULATE_HPP
#define ITERTOOLS_CFAR_A_MASTER_ACCUMULATE_HPP
#include <iostream>
#include <vector>

using namespace std;
namespace itertools{

 struct plus{
        template <typename T>
        T operator ()(T a, T b) const{
            return a+b;
        }
    };


template  <typename T,typename Func = plus>
class accumulate{
public:

class iterator{
public:

    typename T::iterator iter;  
    decltype(*(_container.begin())) _data;
    int count;
    Func function;


    explicit iterator(typename T::iterator _iter,Func func):iter(_iter),_data(*iter),count(0),function(func) {

    }    

    bool operator !=(const iterator& other){
        return other.iter != iter;
    }

    auto operator *(){


        if(count ==0) {
            count++;
            return *iter;
        }

        _data = function(_data , *iter);
        return _data;

    }

    iterator& operator ++() {
        ++iter;
        return *this;
    }

};
    T _container;
     Func function;//Creating new function
    accumulate(T container,Func func=plus()):_container(container),function(func){ }

    iterator begin(){return iterator(_container.begin(),function);
    }

    iterator end(){return iterator(_container.end(),function);
    }



};

}
#endif
