#include <vector>
#include <string>

std::vector<int> solve(std::string s){
  int uppercase = 0;  
  int lowercase= 0;
  int digit = 0;
  int special = 0;
  
  for (char c : s){
      if (std::isupper(c)) {
        uppercase ++;
      } else if (std::islower(c)) {
        lowercase ++;
      } else if (std::isdigit(c)) {
        digit ++;
      } else {
        special ++;
      }
    }
  return {uppercase, lowercase, digit, special};
}
int main() {
    return 0;
}
