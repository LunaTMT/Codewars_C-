#include <iostream>
#include <algorithm>
#include <string>

class TwoToOne {
public:
    static std::string longest(const std::string &s1, const std::string &s2);
};

std::string TwoToOne::longest(const std::string &s1, const std::string &s2) {
    std::string combined = s1 + s2;

    std::sort(combined.begin(), combined.end());
    auto uniqueEnd = std::unique(combined.begin(), combined.end());
    return std::string(combined.begin(), uniqueEnd);
}   