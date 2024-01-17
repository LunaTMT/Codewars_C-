#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int maxTriSum(vector<int> arr) {
    set<int> uniqueNumbers(arr.begin(), arr.end());

    // Copy unique numbers to a new vector
    vector<int> uniqueVector(uniqueNumbers.begin(), uniqueNumbers.end());

    // Sort the unique vector in descending order
    sort(uniqueVector.rbegin(), uniqueVector.rend());

    // Sum the first three elements
    int sum = 0;
    for (int i = 0; i < 3 && i < uniqueVector.size(); ++i) {
        sum += uniqueVector[i];
    }

    return sum;
} 
int main() {
    return 0;  // Indicates successful execution
}
