#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long sumTwoSmallestNumbers(std::vector<int> arr)
{
  sort(arr.begin(), arr.end());
  return arr[0] + arr[1];
}