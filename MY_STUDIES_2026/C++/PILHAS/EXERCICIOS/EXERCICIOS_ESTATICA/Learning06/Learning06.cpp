/*Faça um programa em C++ para empilhar N notas de 
uma classe  e mostrar as notas e a média da classe. */

#include <iostream>
#include <cstdlib>
using namespace std;
#define n 5
typedef struct Pilha{
    int dados[n];
    int topo;
}Pilha;

void Inicializar(Pilha *p){
        p->topo=0;
    for(int i=0; i<n; i++){
        p->dados[i]=0;
        
    }
}

//PILHA CHEIA
bool Verificar(Pilha *p){
    if (p->topo==n){
        cout<<"Pilha cheia!"<<endl;
        return false;
    }
    else{
        return true;
    }
}

//PILHA VAZIA

bool Vazia(Pilha *p){
    if(p->topo == 0){
        cout<<"Pilha vazia!"<<endl;
        return true;
    }

    return false;
}

void Adicionar(Pilha *p, int x){
    if (Verificar(p)==false){
        return;
    }
    
    p->dados[p->topo]=x;
    p->topo++;
}
int Desempilhar(Pilha *p){
    if (Vazia(p)){
        return -1;
    }
    int aux;
    p->topo--;
    aux=p->dados[p->topo];
    cout<<aux<<" Removido da pilha"<<endl;
    return aux;
}

void Exibir(Pilha *p){
    cout<<"\n=====Exibindo pilha====="<<endl;
    for(int i=0; i<p->topo; i++){
        cout<<p->dados[i]<<" ";
    }
    cout<<endl;
}

int Media(Pilha *p){
    if(Vazia(p)){
        return -1;
    }
    int temp=0;
    int cont=p->topo;
    for(int i=0; i<p->topo; i++){
        temp+=p->dados[i];
    }
    cout<<"\n==================\n";
    double media = double(temp)/cont;
    cout<<"Media: "<<media<<endl;
    return media;
}

int main(){
    Pilha alunos;
    Inicializar(&alunos);
    Adicionar(&alunos,10);
    Adicionar(&alunos,8);
    Adicionar(&alunos,7);
    Adicionar(&alunos,4);
    Adicionar(&alunos,9);
    Exibir(&alunos);
    Media(&alunos);
    
}

