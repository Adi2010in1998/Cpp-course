#include <iostream>
int main()
{
    const double price_per_small_room = 25;
    const double price_per_large_room = 35;
    const double sales_tax = 6;
    int number_of_small_rooms;
    int number_of_large_rooms;
    std::cout << "Welcome to Frank's Carpet Cleaning Services" << std::endl;
    std::cout << "Estimate for Carpet cleaning service: " << std::endl;
    std::cout << "Enter the number of small rooms: ";
    std::cin >> number_of_small_rooms;
    std::cout << "Enter the number of large rooms: ";
    std::cin >> number_of_large_rooms;
    std::cout << "Price per small room: $25" << std::endl;
    std::cout << "Price per large room: $35" << std::endl;
    std::cout << "Cost: $" << (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms) << std::endl;
    std::cout << "Tax: $" << ((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) * (sales_tax / 100) << std::endl;
    std::cout << "========================================================" << std::endl;
    std::cout << "Total Estimate: $" << ((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) + (((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) * (sales_tax / 100)) << std::endl;
    std::cout << "This estimate valid for 30 days";
    return 0;
}