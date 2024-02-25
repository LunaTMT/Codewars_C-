#include <string>
#include <cmath>

std::string even_or_odd(int n) 
{
  return std::abs(n) % 2 == 1? "Odd" : "Even";
}