
#ifndef ITERTOOLS_CFAR_A_MASTER_RANGE_HPP
#define ITERTOOLS_CFAR_A_MASTER_RANGE_HPP

#pragma once

namespace itertools {
        class range {

        public:
                iterator begin_;
                iterator end_;

			//init list for range
                range(int begin, int end) : begin_(begin), end_(end) {}
                

	//iterator implementaion for containers
                class iterator {
                public:
                        int i_;
			//init list for iterator 
                        iterator(int start) : i_(start) {}

		//dereference value
                        int operator*() const { return i_; }
			//forward iterator element
                        const iterator &operator++() {
                                ++i_;
                                return *this;
                        }
			//forward iterator copy
                        iterator operator++(int) {
                                iterator copy(*this);
                                ++i_;
                                return copy;
                        }
			//is equal? condition for iterator
                        bool operator==(const iterator &other) const {
                                 return i_ == other.i_; 
                        }
			//is equal? condition for iterator
                        bool operator!=(const iterator &other) const {
                                 return i_ != other.i_; 
                        }
                };
		//retrieve start and end vaalues for iterator 
                iterator begin() const { return begin_; }
                iterator end() const { return end_; }
        };
}

#endif
