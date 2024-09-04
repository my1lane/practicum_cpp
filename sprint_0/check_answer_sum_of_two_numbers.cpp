#include <iostream>

int main()
{
    int sum, first_number, second_number, sum_correct;
    std::cin >> first_number >> second_number >> sum;
    sum_correct = first_number + second_number;

    if (sum != sum_correct)
    {
        std::cout << "Error. The sum of " << first_number << " and " << second_number
        << " is " << sum_correct << std::endl;
    }
}