#include <vector>


std::vector<int> move_zeroes(const std::vector<int>& arr) {
  std::vector<int> result(arr.size(), 0);
  size_t current = 0;
  
  for (size_t i=0; i < arr.size(); ++i){
    if (arr[i] != 0){
      result[current] = arr[i];
      current++;
    }
  }
  
  return result;
}