#include <bits/stdc++.h>

std::string ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
    );

    return s;
}

std::string rtrim(const std::string &str) {
    std::string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

int main()
{
    std::string n_temp;
    std::getline(std::cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    for (int i = 1; i < 11; ++i) {
        std::cout << n << " x " << i << " = " << n * i << std::endl;
    }
    return 0;
}
