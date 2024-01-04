#include <cmath>
#include <iostream>
#include <string>

#include <vector>

int points(const std::array<std::string, 10>& games) {
    int res = 0; 

    for (const auto& game : games) {
        int t1 = game[0] - '0'; 
        int t2 = game[2] - '0';
        res += (t1 > t2) ? 3 : ((t1 < t2) ? 0 : 1);
    }
    return res;
}

int main() {
    std::cout << "Hi";
}

