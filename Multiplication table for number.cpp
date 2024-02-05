#include <iostream>
#include <sstream>

std::string multi_table(int n)
{
    std::ostringstream result;
    for (int i = 1; i <= 10; ++i) {
        result << i << " * " << n << " = " << i * n;
        if (i != 10) {
            result << "\n"; 
        }
    }
    return result.str();
}
