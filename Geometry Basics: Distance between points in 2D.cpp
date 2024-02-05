#include <cmath>

//This one was confusing af

bool is_cube(int volume, int side) {
    if (volume <= 0 || side <= 0) {
        return false; // Invalid input
    }

    double calculatedSide = std::pow(static_cast<double>(volume), 1.0 / 3); // Calculate side length
    int roundedSide = static_cast<int>(std::round(calculatedSide)); // Round to nearest integer

    return (roundedSide * roundedSide * roundedSide == volume && roundedSide == side);
}

int main() {
    std::cout << "Hi";
}

