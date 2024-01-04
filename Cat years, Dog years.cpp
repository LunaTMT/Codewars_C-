#include <cmath>
#include <iostream>
#include <string>

#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  
  std::vector<int> res ;
  if (humanYears == 1)
  {
    res = {1, 15, 15};
  } 
  else if (humanYears == 2)
  {
    res = {2, 24, 24};
  }
  else {
    res = {humanYears, 24 + (humanYears-2) * 4, 24 + (humanYears-2) * 5 };
  }
  return res;
}

int main() {
    std::cout << "Hi";
}

