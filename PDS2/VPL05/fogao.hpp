#ifndef FOGAO_HPP
#define FOGAO_HPP

#include <iostream>

class Fogao {
    private:
        int queimadores_;
        int capacidade_;

    public:
        Fogao(int queimadores, int capacidade);
        void getQueimadores();
        void getCapacidade();
};

#endif
