#include <iostream>
#include <cmath>

int findDigit(int num, int nth) {
    if (nth <= 0) {
        return -1;  // Invalid position
    }

    // Treat num as positive, ignoring its sign
    num = std::abs(num);

    // Special case: If num is zero, all digits are considered to be zero
    if (num == 0) {
        return 0;
    }

    int numDigits = static_cast<int>(log10(num)) + 1;

    if (nth > numDigits) {
        return 0;  // Invalid position, return 0 as per the note
    }

    int position = nth - 1;  

    return (num / static_cast<int>(pow(10, position))) % 10;
}

int main() {
    std::cout << findDigit(5673, 4) << std::endl;  // Output: 5 (corrected to match the example)
    std::cout << findDigit(129, 2) << std::endl;   // Output: 2
    std::cout << findDigit(-2825, 3) << std::endl; // Output: 8
    std::cout << findDigit(-456, 4) << std::endl;  // Output: 0
    std::cout << findDigit(0, 20) << std::endl;    // Output: 0
    std::cout << findDigit(65, 0) << std::endl;    // Output: -1
    std::cout << findDigit(24, -8) << std::endl;   // Output: -1

    return 0;
}
