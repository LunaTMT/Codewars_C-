#include <iostream>
#include <string>

std::string reverse_words(std::string str)
{
  std::string out;
  std::string cword;
  for (char c : str) {
    if (c == ' ') {
      out += cword;
      out += c;
      cword = "";
    }
    cword = c + cword;
  }
  out += cword;
  return out;
}

int main() {
  // Test case
  std::string input = "Hello I am Taylor";
  std::cout << reverse_words(input) << std::endl;  // Output: "sihT si na !elpmaxe"

  return 0;
}
