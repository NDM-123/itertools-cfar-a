//
//  Demo for itertools exercise.
//
//  Version 1 by Adam Lev-Ari on 02/2020. Copyright © 2020 Adam Lev-Ari. All rights reserved.
//  Version 2 by Erel Segal-Halevi on 06/2020.
//

#include <iostream>
#include <vector>

#include "range.hpp"
#include "accumulate.hpp"
#include "filterfalse.hpp"
#include "compress.hpp"
#include "doctest.h"


using namespace std;
using namespace itertools;


TEST_CASE("check addFather")
{
vector<int> vecint = {5 ,6 ,7, 8};
	for (int i: itertools::range(5,9)){

    CHECK(i==vecint[i]);
}
 vecint = {0 ,1 ,2, 3};
	for (int i: itertools::range(0,4)){

    CHECK(i==vecint[i]);
}
vecint = {105 ,106 ,107, 108};
	for (int i: itertools::range(105,109)){

    CHECK(i==vecint[i]);
}
}

TEST_CASE("check addFather"){
vector<int> vecint = {5 ,11, 18, 26};

for (int i: itertools::accumulate(itertools::range(5,9))){
    CHECK(i==vecint[i]);}
}
