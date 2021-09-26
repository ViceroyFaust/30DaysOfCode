#include <iostream>
#include <iomanip>

int main() {
    int i = 4;
    double d = 4.0;
    std::string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int my_int;
    double my_double;
    std::string my_string;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    std::cin >> my_int;
    std::cin >> my_double;
    std::getline(std::cin >> std::ws, my_string);
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    // Print the sum of both integer variables on a new line.
    std::cout << (i + my_int) << std::endl;
    // Print the sum of the double variables on a new line.
    std::cout << (d + my_double) << std::endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    std::cout << (s + my_string) << std::endl;
    return 0;
}