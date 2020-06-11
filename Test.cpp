#include "doctest.h"
#include <iostream>
#include <stdexcept>
#include "range.hpp"

#include <cassert>

TEST_CASE("range"){
    int j = 0;
	for(int ch=0;ch<101;ch++){
    for(int i : range(0,20)){
        CHECK(i == j++);
	}
	j=0;i=0;
    }
}
