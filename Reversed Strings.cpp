#include <algorithm>
#include <string>

std::string reverseString(const std::string& str) {
  return std::string(str.rbegin(), str.rend());
}