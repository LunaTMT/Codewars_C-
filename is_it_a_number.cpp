#include <iostream>
#include <string>
#include <sstream>


bool is_digit(std::string s) {
    std::istringstream ss(s);
    double number;
    char remaining;
    if (!(ss >> number) || ss.get(remaining)) {
        return false;
    }
    return true;
}

int main()
{
    is_digit("  3   5");
}
