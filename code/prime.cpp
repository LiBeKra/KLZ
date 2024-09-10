#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int limit = 50; // Set the limit up to which you want to find prime numbers
    std::cout << "Prime numbers up to " << limit << ":\n";

    for (int num = 2; num <= limit; num++) {
        if (isPrime(num)) {
            std::cout << num << " ";
        }
    }

    std::cout << std::endl;
    return 0;
}
