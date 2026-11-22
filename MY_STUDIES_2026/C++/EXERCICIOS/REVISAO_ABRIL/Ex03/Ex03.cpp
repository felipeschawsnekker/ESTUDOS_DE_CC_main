/* Ponteiros + Vetores + Aritmética de Ponteiros)
Explique por que o nome de um vetor é um ponteiro constante.
Depois escreva um programa que:

declare int V[5] = {92,81,70,90,78}
imprima valores e endereços usando:
V[i]
*(V + i)
V + i

Compare as três maneiras e diga por que são equivalentes.*/

#include <iostream>
using namespace std;

void ImprimirNormal(int x, int V[]){
    for(int i=0; i<x; i++){
        cout<<V[i]<<" ";
        if(i!=x-1){
            cout<<" ; ";
        }
    }
    cout<<endl;
}

void ImprimirPointer(int x,int V[]){
    for(int i=0; i<x; i++){
        cout<<*(V+i)<<" ";
        if(i!=x-1){
            cout<<" ; ";
        }
    }
    cout<<endl;
}

void ImprimirAddress(int x, int V[]){
    for(int i=0; i<x; i++){
        cout<<V+i<<" ";
        if(i!=x-1){
            cout<<" ; ";
        }
    }
    cout<<endl;
}

int main(){
    int x=5;
    int V[x] = {92,81,70,90,78};

    ImprimirNormal(x,V);
    ImprimirPointer(x,V);
    ImprimirAddress(x,V);
}
