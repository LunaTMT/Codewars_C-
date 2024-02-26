#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

std::string spinWords(const std::string &str)
{
  stringstream ss(str);
  vector<string> words;
  string word;
  
  while (ss >> word){
    if (word.length() >= 5){
      reverse(word.begin(), word.end());
    }
    words.push_back(word);
  }
  
  string result;
  for (size_t i=0; i<words.size(); ++i){
    result += (i > 0? " " : "") + words[i];
  }
  
  return result;
}