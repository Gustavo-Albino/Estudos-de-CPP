#ifndef FOGAO_CPP
#define FOGAO_CPP

#include "fogao.hpp"

Fogao::Fogao(int queimadores, int capacidade) {
    this->queimadores_ = queimadores;
    this->capacidade_ = capacidade;
}

void Fogao::getQueimadores() {
    return queimadores_;
}

void Fogao::getCapacidade() {
    return capacidade_;
}

#endif
