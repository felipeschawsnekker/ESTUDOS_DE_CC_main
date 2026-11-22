
    /*Faça um programa que receba N números 
inteiros em uma fila e imprima os números impares e a média deles.
Faça o mesmo para os números pares.
*/

#include <iostream>
using namespace std;
#include <cstdlib>
const int N=5;
typedef struct Fila{
    int idade[N];
    int fim;
}Fila;

void Inicializar(Fila *f){
    for(int i=0; i<N; i++){
        f->idade[i]=0;
    }
    f->fim=0;
}

void Enfileirar(Fila *f,int y){
    if(f->fim==N){
        cout<<"Fila cheia!"<<endl;
        return;
    }
    f->idade[f->fim]=y;
    f->fim++;
}

void Exibir(Fila *p){
    if(p->fim==0){
        cout<<"Fila vazia!"<<endl;
        return;
    }
    int soma=0;
    int n=p->fim;
    cout<<"IDADE PAR: "<<endl;
    for(int i=0; i< p->fim; i++){
        
        if(p->idade[i]%2==0){
        cout<<p->idade[i]<<" | ";
        soma+=p->idade[i];
        }
        
    }
    cout<<"\n \nIDADE IMPAR: "<<endl;
    for(int i=0; i< p->fim; i++){
        if(p->idade[i]%2!=0){
        cout<<p->idade[i]<<" | ";
        soma+=p->idade[i];
    }
    }
    
    cout<<"\n \nMÉDIA TOTAL: "<<(double)soma/n;
    }


int main(){
    Fila f;
    Inicializar(&f);
    Enfileirar(&f,18);
    Enfileirar(&f,22);
    Enfileirar(&f,43);
    Exibir(&f);
}


