#include <iostream>

/**
 * @brief multiply the input number per 2 and return it 
 * @param number to multiply
 * @return The number multiplied per 2
 */
int printNumber(int number);
int main() {
    std::cout << "Enter a new num:" << std::endl;
    int num;
    std::cin >> num;
    std::cout << printNumber(num) <<std::endl;
    return 0;
}

int printNumber(int number)
{
    return number * 2;
}