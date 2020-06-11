#pragma once
#include "range.hpp"
namespace itertools{

template <typename T>
std::vector<T> accumulate(T begin,T end){

std::vector<T> a;
return a;
}

template <typename T>
std::vector<T> accumulate(std::vector<T>){

std::vector<T> a;
return a;
}

template <typename T,typename Proc>
std::vector<T> accumulate(std::vector<T>,Proc p){

std::vector<T> a;
return a;
}
}
