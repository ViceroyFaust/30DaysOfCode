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
        std::find_if(s.rbegin(), s.rend(), std::not1(std::ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}


int main()
{
    std::string N_temp;
    std::getline(std::cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    if (N % 2 != 0 || (N >= 6 && N <= 20))
        std::cout << "Weird" << std::endl;
    else
        std::cout << "Not Weird" << std::endl;

    return 0;
}
