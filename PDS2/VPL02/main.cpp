#include <iostream>

using namespace std;

int main(){

    // 1) Declare uma variável do tipo inteiro e atribua o valor '10'
    int num = 10;

    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo (aka 'nullptr')
    int* ptr = nullptr;

    // 3) Declare um vetor de inteiros e inicialize com valores de 9 a 0 (nessa ordem)
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    cout << "Endereco de num: " << &num << endl;

    // 5) Imprima o CONTEÚDO da variável declarada em (1)
    cout << "Conteudo de num: " << num << endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    cout << "Endereco de ptr: " << &ptr << endl;

    // 7) Imprima o CONTEÚDO da variável declarada em (2)
    cout << "Conteudo de ptr: " << ptr << endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    cout << "Endereco de arr: " << &arr << endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    cout << "Endereco do primeiro elemento de arr: " << &arr[0] << endl;

    // 10) Imprima o CONTEÚDO da primeira posição da variável declarada em (3)
    cout << "Conteudo do primeiro elemento de arr: " << arr[0] << endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    ptr = &num;

    // 12) Imprima o CONTEÚDO da variável declarada em (2)
    cout << "Conteudo de ptr: " << ptr << endl;

    // 13) Imprima o CONTEÚDO da varíavel que é apontada por (2)
    cout << "Conteudo apontado por ptr: " << *ptr << endl;

    // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do CONTEÚDO de (2)
    cout << "Endereco de num e conteudo de ptr sao iguais? " << (&num == ptr) << endl;

    // 15) Coloque o VALOR '5' na varíavel que é apontada pela variável de (2)
    *ptr = 5;

    // 16) Imprima o CONTEÚDO da variável declarada em (1)
    cout << "Conteudo de num: " << num << endl;

    // 17) Atribua o CONTEÚDO da variável de (3) à variável de (2)
    ptr = arr;

    // 18) Imprima o CONTEÚDO da variável declarada em (2) 
    cout << ptr << endl;

    // 19) Imprima o CONTEÚDOCONTEÚDO
