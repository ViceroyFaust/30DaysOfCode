#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

std::vector<std::string> string_split(std::string input) {
    std::vector<std::string> tokens;
    std::string token = "";
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] != ' ') {
            token += input[i];
        } else {
            tokens.push_back(token);
            token = "";
        }
    }
    tokens.push_back(token);
    return tokens;
}

void phonebook_method() {
    int numOfEntries;
    std::string input = "";
    std::vector<std::string> tokens;
    std::unordered_map<std::string, std::string> phonebook;

    std::getline(std::cin, input);
    numOfEntries = stoi(input);
    input = "";
    for (int i = 0; i < numOfEntries; ++i) {
        std::getline(std::cin, input);
        tokens = string_split(input);
        if (tokens.size() == 2) {
            phonebook.insert(std::pair<std::string, std::string>(tokens[0], tokens[1]));
        } else {
            std::cout << "Invalid input" << std::endl;
        }
    }
    while (true) {
        if(!std::getline(std::cin, input))
            break;
        auto loc = phonebook.find(input);
        if (loc != phonebook.end())
            std::cout << loc->first << '=' << loc->second << std::endl;
        else
            std::cout << "Not found" << std::endl;
    }
}

int main() {
    std::string data1 = "2\nabs 888888888\nbbb 9876969879\nabs\nlol\n";
    for (int i = 0; i < 10; ++i) {
        data1 += "abc" + i;
        data1 += "\n";
    }
    std::string data2 = "2\nabs 888888888\nbbb 9876969879\nabs\nlol\n";
    std::stringstream ss;
    
    
    ss << data1;
    std::cin.rdbuf(ss.rdbuf());

    phonebook_method();
    ss << data2;
    std::cin.rdbuf(ss.rdbuf());
    phonebook_method();

    return 0;
}