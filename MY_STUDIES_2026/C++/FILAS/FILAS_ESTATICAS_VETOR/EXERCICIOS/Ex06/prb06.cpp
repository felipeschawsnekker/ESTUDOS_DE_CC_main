#include <iostream>
using namespace std;

#define TAM 10

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
    if(fila->inicio > fila->fim){ // CORRIGIDO
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

    int notas[]={3,4,5,6,7,8,8,7,6,5};

    int tamanho = sizeof(notas)/sizeof(notas[0]);

    for(int i=0; i<tamanho; i++){
        Adicionar(&fila, notas[i]);
    }

    Mostrar(&fila);

    int cont = 0;

    Fila copia = fila; // cópia correta

    while(copia.inicio <= copia.fim){
        cont += Remover(&copia);
    }

    cout << "Media: " << double(cont) / tamanho << endl;

    return 0;
}
