
#pragma once

#include <vector>
#include <stdexcept>
namespace itertools{

template <typename IntType>
std::vector<IntType> range(IntType start, IntType stop)
{
IntType step=1;
  if (step == IntType(0))
  {
    throw std::invalid_argument("step for range must be non-zero");
  }

  std::vector<IntType> result;
  IntType i = start;
  while ((step > 0) ? (i < stop) : (i > stop))
  {
    result.push_back(i);
    i += step;
  }

  return result;
}


}
