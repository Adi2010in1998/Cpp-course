#include <iostream>
int main()
{
    int num1{200};
    int num2{100};
    int result{0};
    result = num1 + num2;
    std::cout << num1 << " + " << num2 << " = " << result;

    result = num1 - num2;
    std::cout << num1 << " - " << num2 << " = " << result;

    result = num1 * num2;
    std::cout << num1 << " x " << num2 << " = " << result;

    result = num1 / num2;
    std::cout << num1 << " ÷ " << num2 << " = " << result;
    return 0;

    result = num1 % num2;
    std::cout << num1 << " mod " << num2 << " = " << result;
}