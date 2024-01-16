#include <iostream>
#include <algorithm>

int getDescendingNumber(int num) {
    std::string numStr = std::to_string(num);
    std::sort(numStr.begin(), numStr.end(), std::greater<char>());
    return std::stoi(numStr);
}

int getAscendingNumber(int num) {
    std::string numStr = std::to_string(num);
    std::sort(numStr.begin(), numStr.end());
    return std::stoi(numStr);
}

void kaprekarRoutine(int num) {
    while (num != 6174) {
        int descNum = getDescendingNumber(num);
        int ascNum = getAscendingNumber(num);
        num = descNum - ascNum;
        std::cout << descNum << " - " << ascNum << " = " << num << std::endl;
    }
}

int main() {
    int initialNum;
    std::cout << "Enter a four-digit number: ";
    std::cin >> initialNum;

    if (initialNum < 1000 || initialNum > 9999) {
        std::cout << "Please enter a valid four-digit number." << std::endl;
        return 1;
    }

    std::cout << "Kaprekar's routine for " << initialNum << ":" << std::endl;
    kaprekarRoutine(initialNum);

    return 0;
}
