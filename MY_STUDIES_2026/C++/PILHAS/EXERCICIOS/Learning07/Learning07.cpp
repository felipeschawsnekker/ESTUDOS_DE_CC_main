/* Converta um número decimal para binário usando pilha

Exemplo: 13 → 1101.*/

#include <iostream>
#include <cstdlib>
using namespace std;

// Nó da pilha
typedef struct NO {
    int dado;
    NO* prox;
} NO;

// Pilha
typedef struct Pilha {
    NO* topo;
} Pilha;

// Inicializa a pilha
void inicializar(Pilha &p) {
    p.topo = nullptr;
}

// Empilha
void push(Pilha &p, int x) {
    NO* novo = (NO*) malloc(sizeof(NO));
    if (novo == nullptr) {
        cout << "Erro de alocação!" << endl;
        return;
    }
    novo->dado = x;
    novo->prox = p.topo;
    p.topo = novo;
}

// Desempilha
int pop(Pilha &p) {
    if (p.topo == nullptr) {
        cout << "Pilha vazia!" << endl;
        return -1;
    }
    NO* rem = p.topo;
    int valor = rem->dado;
    p.topo = rem->prox;
    free(rem);
    return valor;
}

// Converte decimal para binário usando pilha
void bin(Pilha &p, int numero) {
    if (numero == 0) {
        push(p, 0);
        return;
    }

    while (numero > 0) {
        push(p, numero % 2);  // empilha o bit menos significativo
        numero = numero / 2;
    }
}

// Mostra e esvazia a pilha
void show(Pilha &p) {
    while (p.topo != nullptr) {
        cout << pop(p);  // desempilha e imprime
    }
    cout << endl;
}

int main() {
    Pilha p;
    inicializar(p);

    // Teste com vários números
    int numeros[] = {10, 16, 13};
    int qtd = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < qtd; i++) {
        bin(p, *(numeros+i));
        cout << *(numeros+i) << " em binário: ";
        show(p);
    }

    return 0;
}
