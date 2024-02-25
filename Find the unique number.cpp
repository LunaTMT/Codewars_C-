#include <vector>
#include <cstddef>

float find_uniq(const std::vector<float>& arr) {
    // Check the first three elements
    if (arr[0] != arr[1] && arr[0] != arr[2]) {
        return arr[0];
    }

    // Check the remaining elements
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] != arr[0]) {
            return arr[i];
        }
    }

    // This should not be reached, as it's guaranteed that the array contains at least 3 numbers
    return 0.0;
}