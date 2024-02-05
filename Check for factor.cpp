#include <iostream>


bool checkForFactor(int base, int factor) {
  return base % factor == 0;
}

int main() {
    // Call checkForFactor and print the result
    std::cout << std::boolalpha << checkForFactor(10, 2) << std::endl;

    return 0;
}