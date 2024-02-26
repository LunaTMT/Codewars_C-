#include <numeric>
#include <vector>

using namespace std;

int solution(int number) 
{
    if (number <= 0) {
        return 0; 
    }

    vector<int> nums(number - 1);
    iota(nums.begin(), nums.end(), 1);

    int sum = accumulate(nums.begin(), nums.end(), 0,
        [](int acc, int e) {
            return acc + ((e % 3 == 0 || e % 5 == 0) ? e : 0);
        }
    );

    return sum;
}