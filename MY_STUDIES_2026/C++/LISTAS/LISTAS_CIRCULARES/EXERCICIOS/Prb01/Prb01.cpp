/*Faça um programa para manipular uma lista circular duplamente encadeada com os numeros: 10,20,30,15 com o esquema INICIALIZA, INSERIR, REMOVER, IMPRIMIR, ESVAZIAR*/
#include <iostream>
#include <cstdlib>
using namespace std;


struct NO{
    int valor;
    NO* prox;
};

NO* inicio;

void Inicializar(){
    inicio=NULL;
}

void Inserir(int x){
    NO novo = (NO*)malloc(sizeof(NO));
    novo->valor=x;
    if(inicio=NULL){
        inicio=novo;
        novo->prox=inicio;
    }
    else{
        NO* aux=inicio;
        while (aux->prox!=inicio){
            aux=aux->prox;
        }
        aux->prox=novo;
        novo->prox=inicio;
    }
}

void Imprimir{
    if(inicio==NULL){
        cout<<"Lista vazia"<<endl;
        return;
    }
    
    NO* aux=inicio;
    do{
        cout<<aux->valor<<" ";
        aux=aux->prox;
    }while(aux!=inicio);
    cout<<endl;
    }
    
void Remover(int x)
    

