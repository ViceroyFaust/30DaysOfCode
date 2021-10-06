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


/*
 * Complete the 'factorial' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n-1);
}

int main()
{
    std::ofstream fout(getenv("OUTPUT_PATH"));

    std::string n_temp;
    getline(std::cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
