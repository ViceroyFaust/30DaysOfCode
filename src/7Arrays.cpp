#include <bits/stdc++.h>

std::string ltrim(const std::string &str) {
    std::string s(str);

    s.erase(
        s.begin(),
        std::find_if(s.begin(), s.end(), std::not1(std::ptr_fun<int, int>(isspace)))
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

std::vector<std::string> split(const std::string &str) {
    std::vector<std::string> tokens;

    std::string::size_type start = 0;
    std::string::size_type end = 0;

    while ((end = str.find(" ", start)) != std::string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}


int main()
{
    std::string n_temp;
    std::getline(std::cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    std::string arr_temp_temp;
    std::getline(std::cin, arr_temp_temp);

    std::vector<std::string> arr_temp = split(rtrim(arr_temp_temp));

    for (int i = n - 1; i >= 0; --i) {
        int arr_item = stoi(arr_temp[i]);
        std::cout << arr_item << ' ';
    }

    return 0;
}
