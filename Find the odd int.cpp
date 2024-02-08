#include <vector>
#include <unordered_map>

using namespace std;

int findOdd(const vector<int>& numbers){
  
  unordered_map<int, int> charFreq;
  
  for (const int e : numbers){
    charFreq[e]++;
  }
  
  for (const auto& pair : charFreq) {
    if (pair.second % 2 == 1){
      return pair.first;
    }
  }
  
}