#include <vector>

int positive_sum (const std::vector<int> arr){
  int res = 0;
  for (int i : arr){
    res += i > 0? i : 0;
  }
  return res;
}

#include <numeric>  

int sumOfPositives(const std::vector<int>& numbers) {
    // Use std::accumulate with a lambda function to sum positive numbers
    return std::accumulate(numbers.begin(), numbers.end(), 0, [](int sum, int num) {
        return sum + (num > 0 ? num : 0);
    });
}