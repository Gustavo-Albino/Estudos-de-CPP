#ifndef FATURA_H
#define FATURA_H

struct Fatura {
    int    _codigo;
    double _valor;
    Fatura *_Anterior;
    Fatura *_Proximo;
    Fatura(int codigo, double valor);
    void imprimir_dados();
    Fatura* getAnterior();
    Fatura* getProximo();
    void setAnterior(Fatura* A);
    void setProximo(Fatura* P);
    double getValor();
};

#endif