#include <iostream>

/**
 * This function is used as a test function
 * una nuova prova
 * @brief multiply the input number per 2 and return it 
 * @param number to multiply
 * @return The number multiplied per 2
 */
int printNumber(int number);
int main() {
    std::cout << "Enter a Test number:" << std::endl;
    int num;
    std::cin >> num;
    std::cout << printNumber(num) <<std::endl;
    return 0;
}

int printNumber(int number)
{
    return number * 2;
}