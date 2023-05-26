#include <iostream>
#include <map>
using namespace std;

int main() {
    string palavra;
    map<char, int> letras;  // map para armazenar a contagem das letras

    cout << "Digite uma palavra: ";
    cin >> palavra;

    // Loop para percorrer cada letra da palavra
    for (char letra : palavra) {
        if (letras.find(letra) == letras.end()) {
            // se a letra não está presente no map, adiciona com valor 1
            letras[letra] = 1;
        } else {
            // se a letra já está presente no map, incrementa o valor
            letras[letra]++;
        }
    }

    // Loop para imprimir a contagem de cada letra em ordem alfabética
    for (char letra = 'a'; letra <= 'z'; letra++) {
        if (letras.find(letra) != letras.end()) {
            cout << letra << " " << letras[letra] << endl;
        }
    }

    return 0;
}
