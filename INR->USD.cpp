#include <iostream>
int main()
{
    std::cout << "Welcome to the INR to USD converter" << std::endl;
    const double inr_per_usd{0.01069175666}; // As of 01/04/2026
    double inr{0.0};
    double usd{0.0};
    std::cout << "Enter the number of Rupees: ";
    std::cin >> inr;
    usd = inr_per_usd * inr;
    std::cout << inr << " is equivalent to " << usd << " dollars";
    return 0;
}
