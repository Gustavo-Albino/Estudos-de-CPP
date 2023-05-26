#ifndef LISTAFATURA_H
#define LISTAFATURA_H

#include "Fatura.hpp"

struct ListaFatura {
    Fatura *_Ini;
    Fatura *_Final;
    ListaFatura();
    void insere_fatura(Fatura *novafatura);
    Fatura* proxima_fatura();
    void imprimir_lista();
    Fatura* getFim();
};

#endif