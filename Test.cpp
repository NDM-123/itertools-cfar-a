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
	
    for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);	//10
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);	//20
	
    for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);	//30
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);	//40
	
    for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);	//50
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);	//60
	
    for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);	//70
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);	//80
	
    for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);	//90
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);
	for(auto i : range(0,20))CHECK(i == j++);	//100
	
    
}
