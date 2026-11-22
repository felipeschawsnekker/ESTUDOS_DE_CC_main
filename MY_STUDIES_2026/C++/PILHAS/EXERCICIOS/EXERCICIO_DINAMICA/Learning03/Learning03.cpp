/* Faça um programa para empilhar e 
imprimir os nomes e notas dos Alunos de uma classe com as respectivas Notas.
*/

#include <iostream>
using namespace std;
#include <cstdlib>
#include <string>

typedef struct NO{
    string nomes;
    double notas;
    NO* prox;
}NO;

typedef struct Alunos{
    NO* topo;
}Alunos;

void Inicializar(Alunos *p){
    p->topo=NULL;
    
}

void Empilhar(Alunos *p,string name, double value){
    NO* ptr=(NO*)malloc(sizeof(NO));
    ptr->nomes=name;
    ptr->notas=value;
    ptr->prox=p->topo;
    p->topo=ptr;
}

void Exibir(Alunos *p){
    NO* ptr = p->topo;
    if(ptr==NULL){
        cout<<"Pilha vazia!"<<endl;
    }
    while(ptr!=NULL){
        cout<<"\n==================================\n";
        cout<<"NOME: "<<ptr->nomes<<endl;
        cout<<"IDADE: "<<ptr->notas<<endl;
        cout<<"\n==================================\n";
        ptr=ptr->prox;
    }
}

int main(){
    Alunos a;
    Inicializar(&a);
    cout<<"Quantos alunos deseja cadastrar? "<<endl;
    int temp;
    cin>>temp;
    for(int i=0; i<temp; i++){
        string name;
        double nota;
        cout<<"NOME: ";
        cin.ignore();
        getline(cin,name);
        cout<<endl;
        cout<<"NOTA: "; 
        cin>>nota;
        Empilhar(&a,name,nota);
    }
    Exibir(&a);
}
