#include<iostream>
#include<cmath>
using namespace std;

typedef struct Categoria {
    int codigo;
    double caixa;
} Categoria;

void inicia_categoria(Categoria* categoria, int codigo_categoria, double valor_caixa) {
    categoria->codigo = codigo_categoria;
    categoria->caixa = valor_caixa;
}

int codigo_categoria(Categoria* categoria) {
    return categoria->codigo;
}

double valor_caixa_categoria(Categoria* categoria) {
    return categoria->caixa;
}

void adiciona_caixa_categoria(Categoria* categoria, double valor) {
    categoria->caixa += valor;
}

void gasta_caixa_categoria(Categoria* categoria, double valor) {
    categoria->caixa -= valor;
}

typedef struct Orcamento {
    Categoria saude;
    Categoria educacao;
    Categoria seguranca;
    Categoria previdencia;
    Categoria administracao_publica;
} Orcamento;

void inicia_orcamento(Orcamento* orcamento, double impostos) {
    double valor_saude = impostos * 0.15;
    double valor_educacao = impostos * 0.15;
    double valor_seguranca = impostos * 0.20;
    double valor_previdencia = impostos * 0.35;
    double valor_administracao_publica = impostos * 0.15;

    inicia_categoria(&(orcamento->saude), 0, valor_saude);
    inicia_categoria(&(orcamento->educacao), 1, valor_educacao);
    inicia_categoria(&(orcamento->seguranca), 2, valor_seguranca);
    inicia_categoria(&(orcamento->previdencia), 3, valor_previdencia);
    inicia_categoria(&(orcamento->administracao_publica), 4, valor_administracao_publica);
}

void gasto_categoria(Orcamento* orcamento, int codigo_categoria, double valor) {
    switch (codigo_categoria) {
    case 0:
        gasta_caixa_categoria(&(orcamento->saude), valor);
        break;
    case 1:
        gasta_caixa_categoria(&(orcamento->educacao), valor);
        break;
    case 2:
        gasta_caixa_categoria(&(orcamento->seguranca), valor);
        break;
    case 3:
        gasta_caixa_categoria(&(orcamento->previdencia), valor);
        break;
    case 4:
        gasta_caixa_categoria(&(orcamento->administracao_publica), valor);
        break;
    }
}

double saldo_categoria(Orcamento* orcamento, int codigo_categoria) {
    switch (codigo_categoria) {
    case 0:
        return valor_caixa_categoria(&(orcamento->saude));
    case 1:
        return valor_caixa_categoria(&(orcamento->educacao));
    case 2:
        return valor_caixa_categoria(&(orcamento->seguranca));
    case 3:
        return valor_caixa_categoria(&(orcamento->previdencia));
    case 4:
        return valor_caixa_categoria(&(orcamento->administracao_publica));
    default:
        return NAN;
    }
}

Categoria* recupera_categoria(Orcamento* orcamento, int codigo_categoria) {
    switch (codigo_categoria) {
    case 0:
        return &(orcamento->saude);
    case 1:
        return &(orcamento->educacao);
    case 2:
        return &(orcamento->seguranca);
    case 3:
        return &(orcamento->previdencia);
    case 4:
        return &(orcamento->administracao_publica);
    }
}

int main() {
    Orcamento orcamento;
    char test = 0;

    while (cin >> test) {
        switch (test) {
            case 'o': {
                double valor = 0;
                cin >> valor;
                inicia_orcamento(&orcamento, valor);
            } 
            break;
            case 'g': {
                int categoria = 0;
                double valor = 0;
                cin >> categoria >> valor;
                gasto_categoria(&orcamento, categoria, valor);
                cout << categoria << ": " << saldo_categoria(&orcamento, categoria) << endl;
            }
            break;
            case 'p': {
                for (int categoria = 0; categoria < 5; categoria++) {
                    cout << categoria << ": " << saldo_categoria(&orcamento, categoria) << endl;
                }
            }
            break;
            default: {
                cout << "- - - - - - - - - - - - - - - - - -" << endl;
            }
            break;
        }
    }

    return 0;
}