#include <iostream>
#include <string>

int main()
{
    std::string doc = " documents found";
    std::string no = "No";
    std::string one = "One";

    int count;
    std::cin >> count;

    if (count == 0)
    {
        std::cout << "No" << doc << std::endl;
    }
    if (count == 1)
    {
        std::cout << "One document found" << std::endl;
    }
    if (count > 1)
    {
        std::cout << std::to_string(count) + doc << std::endl;
    }
}