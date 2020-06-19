
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
        Func function;	//Creating new lambda function
	//init list filter false
        filterfalse(Func func,T cont):function(func),_container(cont){}

        class iterator{
        public:
            typename T::iterator iter;  
            Func function;

		//init list iterator
            explicit iterator(typename T::iterator _iter,Func func):iter(_iter),function(func) {}
		//is equal? iterator condition        
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
		//dereference for value of iterator
            auto operator *(){

                return *iter;
            }
			//forward iterator
            iterator& operator ++() {
                ++iter;
                return *this;
            }

        };
				//retrieve start and end of iterator
            iterator begin(){
                return iterator(_container.begin(),function);

            }

            iterator end(){
                return iterator(_container.end(),function);

            }


    };
}
#endif
