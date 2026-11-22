/*1️⃣ Crie uma pilha usando vetor de 5 posições.
Implemente push, pop, top, empty.

2️⃣ Modifique o exercício anterior para detectar “pilha cheia”.*/
#include <iostream>
using namespace std;

struct Pilha{
    int dados[5];
    int topo;
};

void init(Pilha &p){
    p.topo = -1;
}

void push(Pilha &p,int x){
    if(p.topo==4){
        cout<<"Pilha cheia";
        return;
    }
    p.dados[++p.topo]=x;
}

int pop(Pilha &p){
    if(p.topo==-1){
        cout<<"Pilha vazia\n";
        return -1;
    }
    cout<<"Removendo o valor: "<<p.dados[p.topo]<<endl;
    return p.dados[p.topo--];
}

void top(Pilha &p){
    if(p.topo==-1){
        cout<<"Pilha vazia\n";
        return;
    }
    cout<<"Elemento do topo: "<<p.dados[p.topo]<<endl;
}

void empty(Pilha &p){
    if(p.topo==-1){
        cout<<"Pilha vazia\n";
    }
    else{
        cout<<"Pilha não vazia\n";
    }
}


void full(Pilha &p){
    if(p.topo==4){
        cout<<"Pilha cheia"<<endl;
    }
    else{
        cout<<"Pilha não está cheia"<<endl;
    }
} 

void show(Pilha &p){
    if(p.topo==-1){
        cout<<"Pilha vazia"<<endl;
        return;
    }
    cout<<"Valores da pilha: ";
    for(int i=p.topo; i>=0; i--){
        cout<<p.dados[i]<<" ";
        if(i!=0){
            cout<<", ";
        }
    }
    cout<<endl;
}

int main(){
    Pilha p;
    init(p);
    push(p,3);
    push(p,4);
    push(p,5);
    show(p);
    pop(p);
    top(p);
    show(p);
}
