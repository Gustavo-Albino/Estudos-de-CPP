#ifndef GELADEIRA_HPP
#define GELADEIRA_HPP

#include <iostream>

class Geladeira {
    private:
        int capacidade_;
        int portas_;

    public:
        Geladeira(int capacidade, int portas);
        void getCapacidade();
        void getPortas();

};

#endif
