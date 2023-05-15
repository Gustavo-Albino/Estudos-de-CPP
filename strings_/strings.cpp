#include <iostream>

int main() 
{    
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    name.append("@gmail.com");
    name.insert(name.length(), ".br");
    std::cout << name << std::endl;
    name.erase(name.length - 3, name.length);
    std::cout << name << std::endl;

    return 0;
}