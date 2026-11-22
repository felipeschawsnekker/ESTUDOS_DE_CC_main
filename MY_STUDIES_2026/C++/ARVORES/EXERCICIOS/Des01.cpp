#include <iostream>
using namespace std;
#include <cstdlib>

typedef struct NO{
    int valor;
    NO* esquerda;
    NO *direita;
}NO;

NO* Inserir(NO*raiz, int valor){
    if(raiz==NULL){
        NO *novoNO=(NO*)malloc(sizeof(NO));
        novoNO->valor=valor;
        novoNO->esquerda=NULL;
        novoNO->direita=NULL;
        return novoNO;
    }
    
    if( (valor) < ( raiz->valor)){
        raiz->esquerda=Inserir(raiz->esquerda,valor);
    }
    else{
        raiz->direita=Inserir(raiz->direita,valor); 
    }

    return raiz;
}

void ordem(NO *raiz){
    if(raiz!=NULL){
        ordem(raiz->esquerda);
        cout<<raiz->valor<<" ";
        ordem(raiz->direita);
    }
}

void preOrdem(NO *raiz){
    if(raiz!=NULL){
        cout<<raiz->valor<<" ";
        preOrdem(raiz->esquerda);
        preOrdem(raiz->direita);
    }
}

void posOrdem(NO *raiz){
    if(raiz!=NULL){
        posOrdem(raiz->esquerda);
        posOrdem(raiz->direita);
        cout<<raiz->valor<<" "; 
        
    }
}

void imprimirDeitada(NO *raiz,int nivel){
    if(raiz!=NULL){
        imprimirDeitada(raiz->direita,nivel+1);
            for(int i=0; i<nivel; i++){
                cout<<"   ";
            }
            cout<<raiz->valor<<endl;
            
            imprimirDeitada(raiz->esquerda,nivel+1);
        }
    
}

int contarNOS(NO* raiz){
    if(raiz==NULL){
        return 0;
        
    }
    return 1+contarNOS(raiz->esquerda)+contarNOS(raiz->direita);
}

int contarFOLHAS(NO*raiz){
    if(raiz==NULL){
        return 0;
        
    }
    if(raiz->esquerda==NULL && raiz->direita==NULL){
        return 1;
    }
    return contarFOLHAS(raiz->esquerda)+contarFOLHAS(raiz->direita);
}

int altura(NO* raiz){
    if(raiz==NULL){
        return 0;
        
    }
    int alturaEsquerda=altura(raiz->esquerda);
    int alturaDireita=altura(raiz->direita);
    if(alturaEsquerda>alturaDireita){
        return alturaEsquerda+1;
    }
    else{
        return alturaDireita+1;
    }
}

int main(){
    Inserir
}

