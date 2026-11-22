/*Faça um programa em C++, que dado o nome de um aluno escreva o nome em ordem inversa, usando filas. 
*/

#include <iostream>
using namespace std;
#include <cstdlib>
const int N=5;
typedef struct Fila{
    string nome[N];
    int fim;
}Fila;

void Inicializar(Fila *f){
    for(int i=0; i<N; i++){
        f->nome[i]="";
    }
    f->fim=0;
}

void Enfileirar(Fila *f, string x){
    if(f->fim==N){
        cout<<"Fila cheia!"<<endl;
        return;
    }
    f->nome[f->fim]=x;
    f->fim++;
}

void Exibir(Fila *p){
    if(p->fim==0){
        cout<<"Fila vazia!"<<endl;
        return;
    }
    
    for(int i=0; i< p->fim; i++){
        
        for(int j=p->nome[i].size()-1; j>=0; j--){
        cout<<(p->nome[i])[j];
    }
    cout<<" ";
    }
}

int main(){
    Fila f;
    Inicializar(&f);
    Enfileirar(&f,"Felipe");
    Exibir(&f);
}
