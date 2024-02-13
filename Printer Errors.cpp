#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Printer
{
public:
    static std::string printerError(const std::string &s);
};

std::string Printer::printerError(const std::string &s) {
    int acc = 0;
    auto in_range = [&acc](char c) { acc += !(c <= 'm')? 1 : 0; };
    std::for_each(s.begin(), s.end(), in_range);
    return std::to_string(acc) + "/" + std::to_string(s.size());
}       