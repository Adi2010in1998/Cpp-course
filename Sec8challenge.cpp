#include <iostream>
int main()
{
    int dollar{};
    int dollar_re{};
    int cent{};
    int quarter{};
    int quarter_re{};
    int dime{};
    int dime_re{};
    int nickel_re{};
    int nickel{};
    int penny{};
    std::cout << "Welcome to the Greedy Method Machine";
    std::cout << "\nEnter the value in cents: ";
    std::cin >> cent;
    dollar = cent / 100;
    dollar_re = cent % 100;
    quarter = dollar_re / 25;
    quarter_re = dollar_re % 25;
    dime = quarter_re / 10;
    dime_re = quarter_re % 10;
    nickel = dime_re / 5;
    nickel_re = dime_re % 5;
    penny = nickel_re;
    std::cout << cent << " cents is equal to the following: " << std::endl;
    std::cout << "Dollars: " << dollar << std::endl;
    std::cout << "Quarters: " << quarter << std::endl;
    std::cout << "Dimes: " << dime << std::endl;
    std::cout << "Nickels: " << nickel << std::endl;
    std::cout << "Pennies: " << penny << std::endl;
    return 0;
}
