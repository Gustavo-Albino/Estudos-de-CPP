#include <iostream>

int main() {
    std::string integrantes_racionais[] = {
        "Kl Jay",
        "Mano Brown",
        "Ice Blue",
        "Edi Rock"
    };

    for (std::string integrante : integrantes_racionais) {
        std::cout << " - " << integrante << std::endl;
    }

    return 0;
}