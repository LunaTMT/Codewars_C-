#include <string>
#include <sstream>
#include <limits>  
#include <algorithm>  

using namespace std;

string highAndLow(const std::string& numbers) {
    istringstream iss(numbers);
    int highest = numeric_limits<int>::min();
    int lowest = numeric_limits<int>::max();

    int num;

    while (iss >> num) {
        highest = max(highest, num);
        lowest = min(lowest, num);

        iss.ignore();
    }

    return to_string(highest) + " " + to_string(lowest);  
}