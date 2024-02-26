#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false; // 0 and 1 are not prime numbers
    }

    if (n == 2) {
        return true; // 2 is a prime number
    }

    if (n % 2 == 0) {
        return false; // Even numbers greater than 2 are not prime
    }

    for (int i = 3; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false; // If n is divisible by any number from 3 to sqrt(n), it's not prime
        }
    }

    return true; // If no divisor is found, n is prime
}