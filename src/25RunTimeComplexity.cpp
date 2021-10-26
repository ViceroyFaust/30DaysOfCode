#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

bool isPrime(int n) {
    // O(sqrt(n))
    if (n <= 1) // 1
        return false; // 1
    for (int i = 2; i <= std::sqrt(n); ++i) // 1, sqrt(n) + 1, 1
        if (n % i == 0) // 1
            return false; // 1
    return true; // 1
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T = 0; // 1
    int n = 0; // 1
    std::cin >> T; // 1
    for (int i = 0; i < T; ++i) { // 1, T + 1, 1
        std::cin >> n; // 1
        (isPrime(n)) ? std::cout << "Prime\n" : std::cout << "Not prime\n";
    }
    return 0;
}
