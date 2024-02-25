#include <cinttypes>
#include <string>
#include <algorithm>

uint64_t descendingOrder(uint64_t n)
{
    std::string num = std::to_string(n);
    std::sort(num.begin(), num.end(), std::greater<char>());
    return std::stoull(num);
}