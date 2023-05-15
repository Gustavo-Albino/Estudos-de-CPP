#include <iostream>

int main() {

    std::cout << "Digite uma nota de 0 a 100: ";
    float nota;
    std::cin >> nota;
    
    /*  Primeira forma

    if (nota >= 60)
        std::cout << "Voce passou!" << std::endl;
    else
        std::cout << "Voce nao passou!" << std::endl;
    */

    //  Segunda forma

    nota >= 60 ? std::cout << "Voce passou!" << std::endl :
    std::cout << "Voce nao passou!" << std::endl;
}