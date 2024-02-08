#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

int find_even_index (const vector <int> numbers) {
  for (int num : numbers){
    cout << num << " ";
  }
  
  int left = 0, right = accumulate(numbers.begin(), numbers.end(), 0);
    
  for (size_t i = 0; i < numbers.size(); ++i){
    right -= numbers[i];
    if (left == right){ return i; }
    left  += numbers[i];
  }
  return -1;
}