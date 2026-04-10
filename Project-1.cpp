/* Frank writes his first program which is about asking the user about his favourite number between 1-100 and displaying it saying “Amazing! That's my favourite number too!”
 */
#include <iostream>

int main()
{
    int favourite_number;
    std::cout
        << "Enter your favourite number between 1 and 100: ";
    std::cin >> favourite_number;
    std::cout << "Amazing!! That's my favourite number as well" << std::endl;
    return 0;
}
