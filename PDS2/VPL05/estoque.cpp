#ifndef ESTOQUE_CPP
#define ESTOQUE_CPP

#include "fogao.hpp"
#include "geladeira.hpp"
#include "estoque.hpp"

Estoque::Estoque();

void Estoque::armazena_geladeira(int capacidade, int portas) {
    geladeiras.push_back(Geladeira(capacidade, portas));
}

void Estoque::vende_geladeira(int capacidade, int portas) {
    auto it = geladeiras.begin();
    while (it != geladeiras.end()) {
        if (it->getCapacidade() == capacidade && it->getPortas() == portas) {
          it = geladeiras.erase(it);
        } else {
          ++it;
        }
      }
}

void Estoque::armazena_fogao(int queimadores, int capacidade) {
    fogoes.push_back(Fogao(queimadores, capacidade));
}

void Estoque::vende_fogao(int queimadores, int capacidade) {
    auto it = fogoes.begin();
    while (it != fogoes.end()) {
        if (it->getQueimadores() == queimadores && it->getCapacidade() == capacidade) {
          it = fogoes.erase(it);
        } else {
          ++it;
        }
      }
}

void Estoque::exibe_geladeiras() {
    for (const auto& geladeira : geladeiras) {
        std::cout << geladeira << std::endl;
    }
}

void Estoque::exibe_fogoes() {
    for (const auto& fogao : fogoes) {
        std::cout << fogao << std::endl;
    }
}

int Estoque::quantidade_geladeiras() {
    return geladeiras.size();
}

int Estoque::quantidade_fogoes() {
    return fogoes.size();
}

#endif
