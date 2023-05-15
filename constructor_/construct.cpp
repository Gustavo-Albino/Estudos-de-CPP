#include <iostream>

class Camisa {
    public:
        Camisa(std::string marca_, std::string cor_, std::string tamanho_, std::string genero_);
        ~Camisa();

        void getAllData();
    private:
        std::string marca_;
        std::string cor_;
        std::string tamanho_;
        std::string genero_;
};

int main() {
    Camisa *camisa1;
    camisa1 = new Camisa("Nike", "Branco", "G", "Masculino");
    delete camisa1;

    return 0;
}

Camisa::Camisa(std::string marca_, std::string cor_, std::string tamanho_, std::string genero_) {
    this->marca_ = marca_;
    this->cor_ = cor_;
    this->tamanho_= tamanho_;
    this->genero_= genero_;
    getAllData();    
}

Camisa::~Camisa() {
    std::cout << "This object was destroyed" << std::endl;
}

void Camisa::getAllData() {
    std::cout << marca_ << '\n';
    std::cout << cor_ << '\n';
    std::cout << tamanho_ << '\n';
    std::cout << genero_ << '\n';
}