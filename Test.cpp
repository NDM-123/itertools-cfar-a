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
	for(int ch=0;ch<101;ch++){
    for(int i : range(0,20)){
        CHECK(i == j++);
	}
	j=0;i=0;
    }
}
