/*Faça um programa para empilhar e imprimir os meses do ano em ordem contrária.
*/

#include <cstdlib>
#include <iostream>
using namespace std;

typedef struct NO{
    string meses;
    NO* prox;
}NO;

typedef struct Pilha{
    NO* topo;
}Pilha;

void Inicializar(Pilha *p){
    p->topo=NULL;
}

void Empilhar(Pilha *p, string mes){
    NO* ptr = (NO*)malloc(sizeof(NO));
    ptr->meses=mes;
    ptr->prox=p->topo;
    p->topo=ptr;
}

void Exibir(Pilha *p){
    NO *ptr = p->topo;
    while(ptr!=NULL){
        cout<<ptr->meses<<" ";
        ptr=ptr->prox;
    }
}

int main(){
    Pilha p;
    Inicializar(&p);
    string meses[12] = {"Janeiro","Fevereiro","Março",
                        "Abril","Maio","Junho",
                        "Julho","Agosto","Setembro",
                        "Outubro","Novembro","Dezembro"};   
    for(int i=0; i<12; i++){
        Empilhar(&p,meses[i]);
    }
    Exibir(&p);
}
