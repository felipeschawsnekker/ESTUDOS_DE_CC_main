#include <iostream>
using namespace std;

const int N = 5;

typedef struct Pilha {
    float Notas[N];
    int Topo;
} Pilha;

void Inicializar(Pilha *p) {
    p->Topo = 0;
    for (int i = 0; i < N; i++) {
        p->Notas[i] = 0;
    }
}

void Empilha(Pilha *p, float X) {
    if (p->Topo == N) {
        cout << "Pilha cheia: " << X << endl;
        return;
    }
    p->Notas[p->Topo] = X;
    p->Topo++;
}

void Imprime(Pilha *p, float &Soma) {
    cout << "Imprimindo pilha..." << endl;

    if (p->Topo == 0) {
        cout << "Pilha Vazia" << endl;
        return;
    }

    for (int i = 0; i < p->Topo; i++) {
        cout << "Valor: " << p->Notas[i] << endl;
        Soma += p->Notas[i];
    }

    cout << "Soma total: " << Soma << endl;
}

int main() {
    Pilha p;
    float soma = 0;

    Inicializar(&p);
    Empilha(&p, 7.5);
    Empilha(&p, 8.0);
    Empilha(&p, 9.2);

    Imprime(&p, soma);

    return 0;
}
