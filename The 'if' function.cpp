#include <cmath>
#include <iostream>

void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
    if (value == true) {
        func1();
    } else {
        func2();
    }
}

int main() {
    std::cout << "Hi    ";
}

