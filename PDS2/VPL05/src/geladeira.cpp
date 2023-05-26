#ifndef GELADEIRA_CPP
#define GELADEIRA_CPP

#include "geladeira.hpp"

Geladeira::Geladeira(int capacidade, int portas) {
    this->capacidade_ = capacidade;
    this->portas_ = portas;
}

Geladeira::getCapacidade() {
    return capacidade_;
}

Geladeira::getPortas() {
    return portas_;
}

#endif
