#include <bits/stdc++.h>

std::string ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace))));

    return s;
}

std::string rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

std::string binary_str(int n) {
    if (n < 0)
        return 0;
    std::string output = "";
    int num = n;
    int pow = 0;
    while (std::pow(2, pow + 1) <= n)
        ++pow;
    while (num != 0) {
        if (std::pow(2, pow) <= num) {
            num -= std::pow(2, pow);
            --pow;
            output += '1';
        } else {
            --pow;
            output += '0';
        }
    }
    if (n % 2 == 0)
        output += '0';
    return output;
}

int most_bits (std::string input) {
    int topCount = 0;
    int count = 0;
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == '1') {
            ++count;
        } else {
            if (topCount < count) 
                topCount = count;
            count = 0;
        }
    }
    if (topCount < count)
        topCount = count;
    return topCount;
}

int main() {
    std::string n_temp;
    getline(std::cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    std::string binaryNum = binary_str(n);
    //std::cout << binaryNum << std::endl;
    std::cout << most_bits(binaryNum) << std::endl;

    return 0;
}
