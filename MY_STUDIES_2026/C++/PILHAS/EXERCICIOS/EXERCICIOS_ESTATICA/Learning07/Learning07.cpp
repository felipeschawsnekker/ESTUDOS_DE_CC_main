/*Faça um programa em C++, que
dado o nome de um aluno escreva o nome em ordem inversa*/
#include <iostream>
#include <string>
using namespace std;
#define n 60
typedef struct Aluno{
    int topo;
    char dados[n];
}Aluno;

void InicializarPilha(Aluno *p){
    for(int i=0; i<n; i++){
    p->dados[i]=' ';
    }
    p->topo=0;
    cout<<"\n PILHA INICIALIZADA COM SUCESSO... \n";
}

void Empilhar(Aluno *p, string nome){
    for(char c : nome){
    if(p->topo==n){
        cout<<"Pilha cheia!"<<endl;
        return;
    }
        p->dados[p->topo]=c;
        p->topo++;
    
    
    }
}

void Passar(Aluno *p, Aluno *s){
    for(int i=0; i<p->topo; i++){
        s->topo = p->topo;
        s->dados[i]=p->dados[p->topo-1-i];
    }
}

void Exibir(Aluno *p){
    for(int i=0; i<p->topo; i++){
        cout<<p->dados[i];
    }
    cout<<endl;
}

int main(){
    Aluno aluno;
    Aluno temp;
    string nome="Felipe";
    InicializarPilha(&aluno);
    InicializarPilha(&temp);
    Empilhar(&aluno,"Felipe");
    Exibir(&aluno);
    Passar(&aluno, &temp);
    Exibir(&temp);
    
}
