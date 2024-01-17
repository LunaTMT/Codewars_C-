#include <string>
using namespace std;
#include <unordered_map>

string alphabetWar(string fight)
{
    unordered_map<char, int> leftPower  = {{'w', 4}, {'p', 3}, {'b', 2}, {'s', 1}};
    unordered_map<char, int> rightPower = {{'m', 4}, {'q', 3}, {'d', 2}, {'z', 1}};
  
    int left = 0;
    int right = 0;
  
    for (char ch : fight){
      left += leftPower.count(ch) ? leftPower[ch] : 0;
      right += rightPower.count(ch) ? rightPower[ch] : 0;
    }
  
    if (left == right) {
        return "Let's fight again!";
    } else if (left > right) {
        return "Left side wins!";
    } else {
        return "Right side wins!";
    }
}

int main() {
    return 0;  // Indicates successful execution
}
