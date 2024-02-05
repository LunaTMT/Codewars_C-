#include <string>
#include <unordered_map>

using namespace std;

unordered_map<char, char> encode_map{
      {'a', '1'},
      {'e', '2'},
      {'i', '3'},
      {'o', '4'},
      {'u', '5'}
    };

unordered_map<char, char> decode_map{
      {'1', 'a'},
      {'2', 'e'},
      {'3', 'i'},
      {'4', 'o'},
      {'5', 'u'}
    };

string encode(const string &str) {
  string result;
  
  for (char c : str){
  
    auto it = encode_map.find(c);

    if (it != encode_map.end()) {
      result += it->second ;
    } else {
      result += c;
    }
  }
  return result;
}

string decode(const string &str) {
  string result;
  
  for (char c : str){
  
    auto it = decode_map.find(c);

    if (it != decode_map.end()) {
      result += it->second ;
    } else {
      result += c;
    }
  }
  return result;
}

int main() {
    return 0;
}
