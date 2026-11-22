/*Faça um programa que receba o nome 
e a idade de uma pessoa e liste os dados da pessoa. 
Fazer uma função para ler e outra listar.
*/
#include <iostream>
using namespace std;
#include <string>
#define N 60
typedef struct Pessoa{
    int topo;
    string nome[N];
    int idade[N];
}Pessoa;


void Inicializar(Pessoa *p){
    p->topo=0;
    for(int i=0; i<N; i++){
        p->nome[i]="";
        p->idade[i]=0;
    }
}

void Listar(Pessoa *p, string name, int age){
    if(p->topo==N){
        cout<<"Pilha cheia!"<<endl;
        return;
    }
    
    //NOME;
    p->nome[p->topo]=name;
    //IDADE;
    p->idade[p->topo]=age;
    //TOPO;
    p->topo++;
}

void Ler(Pessoa *p){
    for(int i=0; i<p->topo; i++){
        cout<<"Nome: "<<p->nome[i]<<" | "<<"Idade: "<<p->idade[i]<<endl;
    }
}

int main(){
    Pessoa pessoa;
    Inicializar(&pessoa);
    Listar(&pessoa, "Felipe",19);
    Listar(&pessoa, "Anaclara",22);
    Listar(&pessoa, "Anabelle",23);
    Ler(&pessoa);
}
