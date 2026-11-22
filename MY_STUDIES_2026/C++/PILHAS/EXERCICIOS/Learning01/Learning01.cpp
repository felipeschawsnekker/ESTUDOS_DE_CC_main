/*Crie uma pilha usando vetor de 5 posições.
Implemente push, pop, top, empty.*/

#include <iostream>
using namespace std;

struct Pilha{
    int tamanho[5]; // capacidade
    int topo; // elemento final da pilha
};
void inicializar(Pilha &p){
    p.topo=-1;
}
void push(Pilha &p, int x){
    if(p.topo==4){
        cout<<"Pilha cheia"<<endl;
        return;
    }
    p.tamanho[++p.topo]=x;
}
int pop(Pilha &p){
    if(p.topo==-1){
        cout<<"Pilha vazia"<<endl;
        return -1;
    }
    return p.tamanho[p.topo--];
}

int top(Pilha &p){
   if(p.topo==-1){
        cout<<"Pilha vazia"<<endl;
        return -1;
    }
    cout<<"Topo da pilha: ";
    return p.tamanho[p.topo];
    cout<<endl;
}

void empty(Pilha &p){
    if(p.topo==-1){
        cout<<"Pilha vazia"<<endl;
    }
    else{
        cout<<"Pilha não está vazia"<<endl;
    }
}

void show(Pilha &p){
    if(p.topo == -1){
        cout << "Pilha vazia" << endl;
        return;
    }
    cout << "Elementos da pilha:" << endl;
    for(int i = p.topo; i >= 0; i--){
        cout << p.tamanho[i] << " ";
    }
    cout<<endl;
}

int main(){
    Pilha x;
    Pilha y;
    inicializar(y);
    show(y);
    inicializar(x);
    push(x,3);
    push(x,5);
    show(x);
    push(x,9);
    push(x,3);
    show(x);
    cout<<top(x)<<endl;
    pop(x);
    cout<<top(x)<<endl;


}
