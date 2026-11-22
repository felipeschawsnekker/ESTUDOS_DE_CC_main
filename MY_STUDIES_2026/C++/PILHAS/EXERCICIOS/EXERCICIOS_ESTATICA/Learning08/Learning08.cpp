/*Faça um programa para empilhar N 
elementos e mostrar os elementos da pilha na ordem que foram empilhados.  
*/

#include <iostream>
using namespace std;
#define N 5
typedef struct Pilha{
    int topo;
    int dados[N];
}Pilha;

void Inicializar(Pilha *p){
    p->topo=0;
    for(int i=0; i<N; i++){
        p->dados[i]=0;
    }
}

void Empilhar(Pilha *p, int x){
    if(p->topo==N){
        cout<<"Pilha cheia!"<<endl;
        return;
    }
    p->dados[p->topo]=x;
    p->topo++;
}

void Exibir(Pilha *p){
    for(int i=0; i<p->topo; i++){
        cout<<p->dados[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Pilha pilha;
    Inicializar(&pilha);
    Empilhar(&pilha, 4);
    Empilhar(&pilha, 3);
    Empilhar(&pilha, 2);
    Empilhar(&pilha, 8);
    Empilhar(&pilha, 10);
    Exibir(&pilha);
}
