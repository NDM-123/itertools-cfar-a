


#pragma once
#include "range.hpp"
#include <functional>

namespace itertools{

template <typename T>
std::vector<T> filterfalse(T begin,T end){

std::vector<T> a;
return a;
}

template <typename T>
std::vector<T> filterfalse(std::vector<T>){

std::vector<T> a;
return a;
}

template <typename Proc,typename T>
std::vector<T> filterfalse(Proc p,std::vector<T>){

std::vector<T> a;
return a;
}

//template <typename Functor,typename Proc,typename T>
//std::vector<T> filterfalse(Functor &func,Proc p){

//std::vector<T> a;
///return a;
//}
}
