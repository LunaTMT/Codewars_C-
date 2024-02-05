#include <string>
#include <unordered_set>

using namespace std;

int getCount(const string& str){
  int result = 0;
  
  unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  for (char C : str){
    char c = tolower(C);
    if (vowels.count(c) > 0){
      result ++;
    } 
  }
  
  return result;
}

int main() {
    return 0;
}
