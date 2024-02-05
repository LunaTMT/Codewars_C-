#include <vector>
#include <string>
#include <algorithm>

std::string warn_the_sheep(const std::vector<std::string>& queue)
{
    if (queue.back() == "wolf") {
        return "Pls go away and stop eating my sheep";
    } else {
        auto it = std::find(queue.begin(), queue.end(), "wolf");
        return "Oi! Sheep number " +  std::to_string(queue.size() - std::distance(queue.begin(), it) - 1) + "! You are about to be eaten by a wolf!";
    }
}

int main() {
    return 0;
}
