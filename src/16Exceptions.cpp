#include <bits/stdc++.h>

int main()
{
    std::string S;
    std::getline(std::cin, S);
    try {
        std::cout << std::stoi(S) << std::endl;
    } catch (std::invalid_argument e) {
        //std::cerr << "Bad String" << std::endl;
        std::cout << "Bad String" << std::endl;
    }
    return 0;
}
