#ifndef ITERTOOLS_CFAR_A_MASTER_COMPRESS_HPP
#define ITERTOOLS_CFAR_A_MASTER_COMPRESS_HPP


#include <iterator>

namespace itertools {
    template <typename container1, typename container2>
    class compress {
        container1 data;	//data structures
        container2 bool_data;
    public:	
		//init list
        explicit compress(container1 x1, container2 x2) : data(x1), bool_data(x2) {}
        class iterator{
            typename container1::iterator _iter;
            typename container1::iterator _it_end;
            typename container2::iterator _bool_it;
        public:
		//init list
            explicit iterator(typename container1::iterator it, typename container1::iterator end, typename container2::iterator _bool)
                    : _iter(it), _it_end(end), _bool_it(_bool) {}
            };
		//default constructor
            iterator(const iterator& other) = default;
		//changing values in iterator
            iterator& operator=(const iterator& other) {
                if (&other != this){
                    iterator(other._iter,other._it_end,other._it_func);
                }
                return *this;
            }
		//forward iterator
            iterator& operator++(){
                ++_iter;
                while (_iter != _it_end && !(*_bool_it)) {
                    ++_iter;
                }
                return *this;
            }
		//forwarding the value of an iterator
            iterator operator++(int){
                iterator temp = *this;
                ++(*this);
                return temp;
            }
		//checking equality in iterator
            bool operator==(const iterator& other) {
                return (_iter == other._iter);
            }
		//checking equality in iterator
            bool operator!=(const iterator& other) {
                return (_iter != other._iter);
            }
		//derefrencing for value
            auto operator*(){
                return *_iter;
            }
        };
	//retrieve begin and end for iterator
        iterator begin(){
            return iterator(data.begin(), data.end(), bool_data.begin());
        }
        iterator end(){
            return iterator(data.end(), data.end(), bool_data.begin());
        }


    };

};


#endif 
