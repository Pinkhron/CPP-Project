#include <iostream>

int main()
{
    int age = 27; // Integer
    double price = 39.99; // Decimal
    char keybind = 'E'; // Single character
    bool working = true; // Boolean
    std::string username = "Pinkhron"; // Sring
    
    std::cout << "I am " << age << " years old\n";
    age = age+1;
    std::cout << "I am now " << age << " years old\n";

    return 0;
}