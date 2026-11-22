/*O programa deve utilizar as funções: 
Inicializa, Empilha, DesEmpilha, TesteCheio, TestaVazio, Imprime. 
Os Nomes e Idades devem ser impressos em cada função: Empilha, Desempilha e Imprime. 
*/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

typedef struct NO{
    char nome[30];
    int idade;
    NO* prox;
}NO;

typedef struct Pessoa{
    NO* topo;
}Pessoa;

void Inicializar(Pessoa *p){
    p->topo=NULL;
}

bool TestaVazio(Pessoa *p){
    if(p->topo==NULL){
        cout<<"Pilha vazia!"<<endl;
        return true;
    }
    else{
        cout<<"Pilha com elementos!"<<endl;
        return false;
    }
}

void Empilhar(Pessoa *p, const char nome[], int idade){
    NO* ptr = (NO*) malloc(sizeof(NO));
    int i = 0;
    while(nome[i] != '\0'){
        ptr->nome[i] = nome[i];
        i++;
    }
    
    ptr->nome[i] = '\0'; // finaliza a string
    ptr->idade = idade;
    ptr->prox = p->topo;
    p->topo = ptr;
    cout<<"Empilhado -> Nome: "<<ptr->nome<< " | Idade: "<<ptr->idade<< endl;
}

void Desempilhar(Pessoa *p){
    if(TestaVazio(p)){
        return;
    }
    NO* ptr = p->topo;
     cout<<"Desempilhado -> Nome: "<<ptr->nome<<" | Idade: "<<ptr->idade<<endl;
    p->topo=ptr->prox;
    free(ptr);
}

void Imprimir(Pessoa *p){
    NO* ptr= p->topo;
    if(TestaVazio(p)){
        return;
    }
    while(ptr!=NULL){
        cout<<"Nome: "<<ptr->nome<<endl;
        cout<<"Idade: "<<ptr->idade<<endl;
        cout<<endl;
        ptr=ptr->prox;
    }
}

int main(){
    Pessoa p;
    Inicializar(&p);
    Empilhar(&p,"felipe",18);
    Empilhar(&p,"Maria",20);
    Imprimir(&p);
    Desempilhar(&p);
    Imprimir(&p);
}
