
#ifndef ITERTOOLS_CFAR_A_MASTER_FILTERFALSE_HPP
#define ITERTOOLS_CFAR_A_MASTER_FILTERFALSE_HPP

#include <iostream>
#include <vector>

using namespace std;
namespace itertools{

    template  <typename Func,typename T>
    class filterfalse{
    public:
        T _container;
        Func function;//Creating new function

        filterfalse(Func func,T cont):function(func),_container(cont){}

        class iterator{
        public:
            typename T::iterator iter;  //Data Member
            Func function;


            explicit iterator(typename T::iterator _iter,Func func):iter(_iter),function(func) {}
            bool operator !=(const iterator& other){
                while (other.iter != iter){
                    if(!function(*iter)){
                        return other.iter != iter;
                    }
                    else{
                        ++iter;
                    }
                }
                return false;
            }

            auto operator *(){

                return *iter;
            }

            iterator& operator ++() {
                ++iter;
                return *this;
            }

        };

            iterator begin(){
                return iterator(_container.begin(),function);

            }

            iterator end(){
                return iterator(_container.end(),function);

            }


    };
}
#endif
