#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>

std::string rgb_to_hex(int r, int g, int b) {
    // Ensure values are within the valid range 0-255
    r = std::min(255, std::max(0, r));
    g = std::min(255, std::max(0, g));
    b = std::min(255, std::max(0, b));

    // Convert decimal values to hexadecimal and format the result
    std::stringstream ss;
    ss << std::uppercase << std::setw(2) << std::setfill('0') << std::hex << r;
    ss << std::uppercase << std::setw(2) << std::setfill('0') << std::hex << g;
    ss << std::uppercase << std::setw(2) << std::setfill('0') << std::hex << b;

    return ss.str();
}