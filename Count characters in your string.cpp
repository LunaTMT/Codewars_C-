#include <map>
#include <string>
#include <map>

using namespace std;
map<char, unsigned> count(const std::string& str) {
  map<char , unsigned> freq = {};
  for (const char c : str){
    freq[c]++;
  }
  return freq;
}

int main(){
    return 0;
}