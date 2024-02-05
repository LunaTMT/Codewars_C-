#include <cmath>

//This one was confusing af

int convert_to_int(float float_num) {
    int int_num;
    // Create a pointer to the float number
    float *float_ptr = &float_num;
    // Create a pointer to an integer
    int *int_ptr = &int_num;
    // Copy the bits from the float to the integer
    *int_ptr = *((int *)float_ptr);
    return int_num;
}
int main() {
    std::cout << "Hi";
}

