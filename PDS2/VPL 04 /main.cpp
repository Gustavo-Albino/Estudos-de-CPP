// NÃO ALTERE ESSA LINHA
#include "avaliacao.hpp"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {

    ListaFatura lista;
    string Entrada, s1, s2, s3;

    vector<string> Palavras;

    int codigo;
    double valor;
    int run = 1;

    while (run) {
        getline(cin, Entrada);
        stringstream s(Entrada);
        s>>s1>>s2>>s3;
        if (Entrada.empty()) {
            run = 0;
        }
        switch (Entrada[0])
        {
            case 'a': {
                avaliacao_basica();
                break;
            }
            case 'f': {
                codigo = stoi(s2);
                valor = atof(s3.c_str());
                lista.insere_fatura(new Fatura(codigo, valor));
                break;
            }
            case 'j': {
                lista.getFim()->imprimir_dados();
                break;
            }
            case 'p': {
                lista.imprimir_lista();
                break;
            }
            case 'r': {
                Fatura *fatura_um = lista.proxima_fatura();
                if (fatura_um) {
                    fatura_um->imprimir_dados();
                }
                break;
            }
            default: {
                break;
            }
        }
    }
}