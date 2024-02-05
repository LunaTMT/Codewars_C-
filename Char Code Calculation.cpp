#include <iostream>
#include <string>

int calculateDifference(const std::string& input) {
    // Calculate total1
    std::string total1;
    for (char c : input) {
        total1 += std::to_string(static_cast<int>(c));
    }

    // Replace 7 with 1 to get total2
    std::string total2 = total1;
    std::replace(total2.begin(), total2.end(), '7', '1');

    // Calculate the sum of digits for total1 and total2
    int sumTotal1 = 0, sumTotal2 = 0;
    for (char digit : total1) {
        sumTotal1 += digit - '0';
    }
    for (char digit : total2) {
        sumTotal2 += digit - '0';
    }

    // Return the difference
    return sumTotal1 - sumTotal2;
}


int main() {
    calc("ABC");

    return 0;
}
