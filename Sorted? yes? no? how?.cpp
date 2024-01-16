#include <cmath>
#include <string>
#include <vector>

std::string is_sorted_and_how(std::vector<int> arr) {
    if (arr.size() < 2) {
        return "yes, ascending";  // An array with 0 or 1 element is considered sorted.
    }

    bool asc = true;
    bool desc = true;

    for (size_t i = 0; i < arr.size() - 1 && (asc || desc); ++i) {
        if (arr[i] > arr[i + 1]) {
            asc = false;
        } else if (arr[i] < arr[i + 1]) {
            desc = false;
        }
    }

    return asc ? "yes, ascending" : desc ? "yes, descending" : "no";
}

int main() {
    return 0;  // Indicates successful execution
}
