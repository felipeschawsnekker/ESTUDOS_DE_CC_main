/*Faça um programa em C++ para enfileirar N notas de uma classe  e mostrar as notas e a média da classe. 
*/

#include <iostream>
using namespace std;
#include <cstdlib>
const int N=5;
typedef struct Fila{
    int notas[5];
    int fim;
}Fila;

void Inicializar(Fila *f){
    for(int i=0; i<N; i++){
        f->notas[i]=0;
    }
    f->fim=0;
}

void Enfileirar(Fila *f, int x){
    if(f->fim==N){
        cout<<"Fila cheia!"<<endl;
        return;
    }
    f->notas[f->fim]=x;
    f->fim++;
}

void Exibir(Fila *p){
    if(p->fim==0){
        cout<<"Fila vazia!"<<endl;
        return;
    }
    int temp=0;
    for(int i=0; i<p->fim; i++){
        cout<<p->notas[i]<<" ";
        temp+=p->notas[i];
    }
    cout<<"\nMédia: "<<(double)temp/p->fim<<endl;
    
}

int main(){
    Fila f;
    Inicializar(&f);
    Exibir(&f);
    Enfileirar(&f,1);
    Enfileirar(&f,21);
    Enfileirar(&f,31);
    Enfileirar(&f,41);
    Enfileirar(&f,51);
    Enfileirar(&f,1);
    Exibir(&f);
}
