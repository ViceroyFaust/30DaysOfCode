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

    std::vector<std::vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        std::string arr_row_temp_temp;
        std::getline(std::cin, arr_row_temp_temp);

        std::vector<std::string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }
    // My code for finding the "hourglass" with the largest value:
    int biggestSum = INT_MIN;
    int sum = 0;
    for (int row = 1; row < 5; ++row) {
        for (int col = 1; col < 5; ++col) {
            sum += arr[row][col];
            for (int nCol = col - 1; nCol < col + 2; ++nCol) {
                sum += arr[row - 1][nCol];
                sum += arr[row + 1][nCol];
            }
            if (sum > biggestSum)
                biggestSum = sum;
            sum = 0;
        }
    }
    std::cout << biggestSum << std::endl;
    return 0;
}
