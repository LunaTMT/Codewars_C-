#include <algorithm>

int get_sum(int a, int b)
{
  if (a == b){ return a; }
  if (a > b){ std::swap(a, b); }
  int n = b - a + 1;
  return n * (a + b) / 2;
}