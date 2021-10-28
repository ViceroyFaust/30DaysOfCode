#include <iostream>

int main() {
    int dueD, dueM, dueY, retD, retM, retY;
    // Get return date
    std::cin >> retD;
    std::cin >> retM;
    std::cin >> retY;
    // Get date due
    std::cin >> dueD;
    std::cin >> dueM;
    std::cin >> dueY;

    if (dueY > retY) {
        std::cout << 0 << std::endl;
    } else if (dueY == retY) {
        if (dueM < retM)
            std::cout << (500 * (retM - dueM)) << std::endl;
        else if (dueD < retD && dueM == retM)
            std::cout << (15 * (retD - dueD)) << std::endl;
    } else {
        std::cout << 10000 << std::endl;
    }

    /*
    if (dueD >= retD && dueM >= retM && dueY >= retY) {
        std::cout << 0 << std::endl;
    } else if (dueY >= retY && dueM >= retM && dueD < retD) {
        std::cout << (15 * (retD - dueD)) << std::endl;
    } else if (dueY >= retY && dueM < retM) {
        std::cout << (500 * (retM - dueM)) << std::endl;
    } else {
        std::cout << 10000 << std::endl;
    } */

    return 0;
}