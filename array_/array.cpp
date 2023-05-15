#include <iostream>

int main() {

    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    for(std::string car : cars) {
        std::cout << car << std::endl;
    }

    return 0;
}