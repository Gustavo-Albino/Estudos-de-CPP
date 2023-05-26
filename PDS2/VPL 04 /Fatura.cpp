#include <iostream>
#include "Fatura.hpp"

using namespace std;

Fatura::Fatura(int codigo, double valor) {
    _codigo=codigo;
    _valor=valor;
}
void Fatura::imprimir_dados() {
    cout << _codigo << " " << _valor << endl;
}
void Fatura::setProximo(Fatura *P) {
    _Proximo = P;
}
void Fatura::setAnterior(Fatura *A) {
    _Anterior = A;
}
Fatura* Fatura::getProximo() {
    return _Proximo;
}
Fatura* Fatura::getAnterior() {
    return _Anterior;
}
double Fatura::getValor() {
    return _valor;
}