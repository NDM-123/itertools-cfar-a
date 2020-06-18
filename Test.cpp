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


TEST_CASE("check range")
{
	vector<int> vecInt = {1,2,3,4};
    vector<string> vecString = {"Hello", "Bye", "Adam"};
    vector<float> vecFloat = {-1, 0.3, 5.2, -8.3};
    
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

TEST_CASE("check accumulate"){
vector<int> vecint = {5 ,11, 18, 26};

for (int i: itertools::accumulate(itertools::range(5,9))){
    CHECK(i==vecint[i]);}
}

TEST_CASE("check filterfalse"){
vector<int> vecint = {5 ,11, 18, 26};

	for (auto i: filterfalse(lessThan3{}, vecInt) )
        CHECK(i==vecint[i]);
    cout << endl << "Filter out all even numbers in range(5,9): " << endl;
    for (auto i: filterfalse([](int i){return i%2==0;}, range(5,9)) )
        CHECK(i==vecint[i]);
    
}

TEST_CASE("check compress"){
vector<int> vecint = {5 ,11, 18, 26};

    
     for (auto i: compress(string("abcd"), vector<bool>({true,true,false,true})) )
        CHECK(i==vecString[i]);  // a b d
    for (auto i: compress(range(5,9), vector<bool>({true,true,false,true})) )
        CHECK(i==vecint[i]);  // 5 6 8
}