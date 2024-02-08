#include <string>
#include <unordered_map>
#include <cctype>

using namespace std;

size_t duplicateCount(const string& str)
{
  unordered_map<char, int> charFreq;
  
  for (char ch : str) {
    if (isalnum(ch)) {
      charFreq[tolower(ch)]++;
    }
  }
  
  int result = 0;
  for (const auto& pair : charFreq) {
    if (pair.second > 1) {
      result++;
    }
  }
  
  return result;
}