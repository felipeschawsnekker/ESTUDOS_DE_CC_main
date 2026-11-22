/* Calcule o tamanho da pilha dinâmica
Sem usar variável global.
Use apenas percorrendo a lista ligada.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef struct NO{
    NO* prox;
    int dado;
}NO;

typedef struct Pilha{
    NO* topo;
}Pilha;

void init(Pilha &p){
    p.topo=nullptr;
}

void push(Pilha &p, int x){

    NO* ptr=(NO*)malloc(sizeof(NO));
    ptr->dado=x;
    ptr->prox=p.topo;
    p.topo=ptr;
}

int pop(Pilha &p){
    if(p.topo==nullptr){
        cout<<"Pilha vazia"<<endl;
    }
    NO *rem=p.topo;
    int valor=rem->dado;
    p.topo=rem->prox;
    free(rem);
    return valor;
}

int cont(Pilha &p){
    int c=0;
     NO* aux = p.topo;
   while(aux != nullptr){
        c++;
        aux = aux->prox;
    }
   return c;
}

void show(Pilha &p){
    NO* aux=p.topo;
    while(aux!=nullptr){
        cout<<aux->dado<<" ";
        aux=aux->prox;
    }
}

int main(){
    Pilha p;
    init(p);
    srand(time(0));
    int num=((rand()%30)+3);

    for(int i=0; i<num; i++){
        int temp=((rand()%100)+5);
        push(p,temp);
    }
    cout<<"Tamanho da pilha: "<<cont(p)<<endl;
    show(p);
    return 0;
}


