#include <iostream>
#include <vector>
#include <utility>

class PartList {
public:
    static std::vector<std::pair<std::string, std::string>> partlist(const std::vector<std::string>& arr);
};

std::vector<std::pair<std::string, std::string>> PartList::partlist(const std::vector<std::string>& arr) {
    std::vector<std::pair<std::string, std::string>> result;

    for (size_t i = 1; i < arr.size(); ++i) {
        std::string firstPart = "";
        std::string secondPart = "";

        // Concatenate elements for the first part
        for (size_t j = 0; j < i; ++j) {
            firstPart += (j > 0 ? " " : "") + arr[j];
        }

        // Concatenate elements for the second part
        for (size_t j = i; j < arr.size(); ++j) {
            secondPart += (j > i ? " " : "") + arr[j];
        }

        // Create a pair and add it to the result vector
        result.push_back(std::make_pair(firstPart, secondPart));
    }

    return result;
}

int main() {
    // Example usage
    std::vector<std::string> a = {"az", "toto", "picaro", "zone", "kiwi"};
    std::vector<std::pair<std::string, std::string>> result = partlist(a);

    // Output the result
    for (const auto& pair : result) {
        std::cout << "(" << pair.first << ", " << pair.second << ")";
    }

    return 0;
}
