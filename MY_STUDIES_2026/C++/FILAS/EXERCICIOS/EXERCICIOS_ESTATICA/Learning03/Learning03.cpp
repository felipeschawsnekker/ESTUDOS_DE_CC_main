/*Faça um programa que receba o nome e a idade de uma pessoa e liste os dados da pessoa. Fazer uma função para ler e outra listar.
*/

#include <iostream>
using namespace std;
#include <cstdlib>
const int N=5;
typedef struct Fila{
    string nome[N];
    int idade[N];
    int fim;
}Fila;

void Inicializar(Fila *f){
    for(int i=0; i<N; i++){
        f->nome[i]="";
        f->idade[i]=0;
    }
    f->fim=0;
}

void Enfileirar(Fila *f, string x, int y){
    if(f->fim==N){
        cout<<"Fila cheia!"<<endl;
        return;
    }
    f->nome[f->fim]=x;
    f->idade[f->fim]=y;
    f->fim++;
}

void Exibir(Fila *p){
    if(p->fim==0){
        cout<<"Fila vazia!"<<endl;
        return;
    }

    for(int i=0; i< p->fim; i++){
        cout<<"======================\n";
        cout<<"NOME: "<<p->nome[i]<<"  |"<<endl;
        cout<<"IDADE: "<<p->idade[i]<<"    |"<<endl;
        cout<<"======================\n";
        cout<<endl;
    }


}

int main(){
    Fila f;
    Inicializar(&f);
    Enfileirar(&f,"Felipe",18);
    Enfileirar(&f,"Maria",22);
    Enfileirar(&f,"Analu",43);
    Exibir(&f);
}
