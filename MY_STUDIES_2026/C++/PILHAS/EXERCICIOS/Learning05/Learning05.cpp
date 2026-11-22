/* Implemente uma pilha dinâmica (nó encadeado)

Com struct:

struct Node { int dado; Node* prox; };

Funções:
push, pop, top, isEmpty, clear.*/
#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct NO{
    int dado;
    NO* prox;
}NO;

typedef struct Pilha{
    NO* topo;
}Pilha;

void init(Pilha &p){
    p.topo=nullptr;
}

void push(Pilha &p, int valor){
    NO *novo=(NO*)malloc(sizeof(NO));
    novo->dado=valor;
    novo->prox=p.topo;
    p.topo=novo;
}

int pop(Pilha &p){
    if(p.topo==nullptr){
        cout<<"Pilha vazia"<<endl;
        return -1;
    }
    NO *rem=p.topo;
    int valor = rem->dado;
    p.topo=rem->prox;
    free(rem);
    return valor;
}

int top(Pilha &p){
    if(p.topo==nullptr){
        cout<<"Pilha vazia"<<endl;
        return -1;
    }
    return p.topo->dado;
}

bool empty(Pilha &p){
    return p.topo==nullptr;
}

void clear(Pilha &p) {
    while(p.topo != nullptr) {
        pop(p);  // já usa free internamente
    }
}

int main(){
    Pilha p;
    init(p);

    push(p, 10);
    push(p, 20);
    push(p, 30);

    cout << "Topo: " << top(p) << endl;
    cout << "Pop: "  << pop(p) << endl;
    cout << "Topo: " << top(p) << endl;
    clear(p);

    return 0;
}
