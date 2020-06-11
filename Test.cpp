#include "doctest.h"
#include <iostream>
#include <stdexcept>
#include <vector>

#include "range.hpp"
#include "accumulate.hpp"
#include "filterfalse.hpp"
#include "compress.hpp"


using namespace itertools;
using namespace std;
#include <cassert>

TEST_CASE("range"){
    int j = 0;
	
    for(auto i : range(0,101)){
        CHECK(i == j++);
	}
	
    
}
