

#pragma once
#include "range.hpp"
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

template <typename T,typename Functor>
std::vector<T> filterfalse(Functor &lambda,std::vector<T>){

std::vector<T> a;
return a;
}
}
