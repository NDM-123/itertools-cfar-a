#pragma once
#ifndef ITERTOOLS_CFAR_A_MASTER_RANGE_HPP
#define ITERTOOLS_CFAR_A_MASTER_RANGE_HPP

namespace itertools {
        class range {
    private:
                iterator begin_;
                iterator end_;
        public:
                class iterator {
                        friend class range;
                public:
                       
                        const iterator &operator++() {
                                ++i_;
                                return *this;
                        }
                        iterator operator++(int) {
                                iterator copy(*this);
                                ++i_;
                                return copy;
                        }
 int operator*() const { return i_; }
                        bool operator==(const iterator &other) const {
                                 return i_ == other.i_; 
                        }
      bool operator!=(const iterator &other) const {
                                 return i_ != other.i_; 
                        }

                protected:
                        iterator(int start) : i_(start) {}
                        int i_;
                };

                iterator begin() const { return begin_; }
                iterator end() const { return end_; }
                range(int begin, int end) : begin_(begin), end_(end) {}
                
    
        };
}

#endif
