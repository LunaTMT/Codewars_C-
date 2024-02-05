#include <vector>
#include <algorithm>

int nthSmallest (std::vector<int> vec , int nSmallest)
{
  std::sort(vec.begin(), vec.end());
  return vec[nSmallest - 1];
}

int main() {
    return 0;
}
