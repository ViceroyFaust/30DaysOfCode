#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int tests;
    std::string input;

    std::cin >> tests;
    for (int i = 0; i < tests; ++i) {
        std::cin >> input;

        for (int j = 0; j < input.length(); j += 2) {
            std::cout << input[j];
        }
        std::cout << ' ';
        for (int j = 1; j < input.length(); j += 2) {
            std::cout << input[j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
