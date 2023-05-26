#include <iostream>
#include "ListaFatura.hpp"

using namespace std;
ListaFatura::ListaFatura() {
    _Ini = nullptr;
}
Fatura* ListaFatura::getFim() {
    return _Final;
}
void ListaFatura::insere_fatura(Fatura *novafatura) {
    if (!_Ini) {
        _Ini = novafatura;
        _Final    = novafatura;
        novafatura->setProximo(nullptr);
        novafatura->setAnterior(nullptr);
    } else {
        if (novafatura->getValor() < _Ini->getValor()) {
            Fatura *Atual           = _Ini->getProximo();
            Fatura *AntesAtual      = _Ini;
            while (Atual && (novafatura->getValor() < Atual->getValor()))
            {
                AntesAtual= Atual;
                Atual= Atual->getProximo();
            }
            if (Atual) {
                if (novafatura->getValor() > Atual->getValor()) {
                    novafatura->setAnterior(AntesAtual);
                    novafatura->setProximo(Atual);
                    AntesAtual->setProximo(novafatura);
                    return;
                }
            }
            _Final= novafatura;
            Atual = novafatura;
            Atual->_Proximo= nullptr;
            Atual->_Anterior = AntesAtual;
            AntesAtual->_Proximo= Atual;
        } else {
            Fatura *Atual= _Ini->getAnterior();
            Fatura *DepoisAtual= _Ini;
            while (Atual && (novafatura->getValor() > Atual->getValor())) {
                DepoisAtual= Atual;
                Atual= Atual->getAnterior();
            }
            if (Atual) {
                if (novafatura->getValor() < Atual->getValor()) {
                    novafatura->setProximo(DepoisAtual);
                    novafatura->setAnterior(Atual);
                    DepoisAtual->setAnterior(novafatura);
                    return;
                }
            }
            Atual = novafatura;
            _Ini= novafatura;
            Atual->_Anterior= nullptr;
            Atual->_Proximo= DepoisAtual;
            DepoisAtual->_Anterior= Atual;
        }
    }
}
Fatura* ListaFatura::proxima_fatura() {
    if(!_Ini) {
        return nullptr;
    }
    Fatura* _Resultado;
    _Resultado = _Ini;
    if (_Ini->getProximo()) {
        _Ini = _Ini->getProximo();
        _Ini->setAnterior(nullptr);
    } else {
        _Ini = nullptr;
    }
    return _Resultado;
}
void ListaFatura::imprimir_lista() {
    Fatura *Atual = _Ini;
    while(Atual)
    {
        Atual->imprimir_dados();
        Atual = Atual->getProximo();
    }
}