
#include <vector>
#include <numeric> // for std::accumulate

double calcAverage(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        return 0; // Return 0 for empty lists
    }

    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    return static_cast<double>(sum) / numbers.size();
}

int main() {
    std::cout << "Hi";
}

