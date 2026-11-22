#include <iostream>
using namespace std;

#define TAM 5

typedef struct Fila{
    int V[TAM];
    int inicio;
    int fim;
}Fila;

void Inicializar(Fila *fila){
    fila->inicio = 0;
    fila->fim = -1;
}

void Adicionar(Fila *fila, int valor){
    fila->fim++;
    fila->V[fila->fim] = valor; 
    cout << "Adicionando " << valor << "..." << endl;
}

int Remover(Fila *fila){
    if(fila->inicio > fila->fim){ 
        cout << "Fila vazia!\n";
        return -1;
    }

    int valor = fila->V[fila->inicio];
    fila->inicio++;

    cout << "Removendo " << valor << "..." << endl;
    return valor;
}

void Mostrar(Fila *fila){
    if (fila->inicio > fila->fim) {
        cout << "Fila vazia!\n";
        return;
    }

    int i = fila->inicio;
    while(i <= fila->fim){
        cout << fila->V[i] << " ; ";
        i++;
    }
    cout << endl;
}

int main(){
    Fila fila;

    Inicializar(&fila);

    Adicionar(&fila,10);
    Adicionar(&fila,20);
    Adicionar(&fila,30);

    Mostrar(&fila);

    Remover(&fila);

    Mostrar(&fila);

    return 0;
}
