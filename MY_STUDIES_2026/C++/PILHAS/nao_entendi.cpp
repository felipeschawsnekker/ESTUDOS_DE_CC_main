using namespace std;
#include <iostream>
#include <string>

typedef struct NO{
    int dado;
    struct NO *prox;
} NO;

typedef struct Pilha{
    NO *topo;
}PILHA;

void inicializar(PILHA *p){ 
    p->topo=NULL;
}

void empilha(int dado, PILHA *p){
    NO *ptr=(NO*)malloc(sizeof(NO));
    if(ptr==NULL){
        cout<<"ERRO DE ALUCAÇÃO DE MEMÓRIA \n";
    }
    else{
        ptr->dado=dado;
        ptr->prox=p->topo;
        p->topo=ptr;
    }
}

int desempilha(PILHA *p){
    NO *ptr=p->topo;
    int dado1;
    if(ptr==NULL){
        cout<<"Pilha vazia \n";
    }
    else{
        while(ptr !=NULL){
            cout<<"\n"<<ptr->dado;
        }
    }
}
