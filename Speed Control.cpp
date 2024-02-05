#include <vector>
#include <cmath> 

using namespace std;

class GpsSpeed {
public:
    static int gps(int s, std::vector<double> &x);
};

int GpsSpeed::gps(int s, std::vector<double> &arr) {
    if (arr.size() <= 1) {
        return 0;
    }

    int res = 0;

    for (size_t i = 1; i < arr.size(); ++i) {
        res = max(res, static_cast<int>(floor((3600 * (arr[i] - arr[i - 1]) / s))));
    }

    return res;
}


int main() {
    return 0;  // Indicates successful execution
}
