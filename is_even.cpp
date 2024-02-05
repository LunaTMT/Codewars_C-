#include <cmath>
#include <iostream>

bool is_even(double n)
{
    if (std::abs(n - static_cast<int>(n)) > 0) { return false; }
  
    return static_cast<int>(n) % 2 == 0;
}

int main()
{
    std::cout << is_even(2);
}