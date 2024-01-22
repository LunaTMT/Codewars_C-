#include <vector>
#include <algorithm>

std::vector<int> get_even_numbers(const std::vector<int>& arr) {
  std::vector<int> result = arr;

  auto isOdd = [](int n) { return n % 2 == 1; };

  auto newEnd = std::remove_if(result.begin(), result.end(), isOdd);

  result.erase(newEnd, result.end());

  return result;
}
int main() {

    return 0;
}