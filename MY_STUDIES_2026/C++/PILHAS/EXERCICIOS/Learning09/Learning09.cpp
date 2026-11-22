#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

/* Faça um programa que utiliza a estrutura:
       //Define Estrutura do NÓ. Dados e Ponteiro para Próximo NÓ
typedef struct NO{
	 char     Nomes[30];
	 int     Idades;
	 struct   NO *prox;
     }NO;

typedef struct Pilha{
	  NO *topo;
     }PILHA;
      O programa deve utilizar as funções: Inicializa, Empilha, DesEmpilha, TesteCheio, TestaVazio, Imprime. Os Nomes e Idades devem ser 
      impressos em cada função: Empilha, Desempilha e Imprime. 
*/

typedef struct NO{
    char nomes_no[30];
    int idades_no;
    NO *prox;
}NO;

typedef struct Pilha{
    NO *topo;
}Pilha;

void InicializarPilha(Pilha &p){
    p.topo = nullptr;
}

int TestaVazio(Pilha &p){
    return (p.topo == nullptr);
}

int TesteCheio(){
    // Em pilha dinâmica não existe cheio
    return 0;
}

void EmpilharPilha(Pilha &p, char this_nome[30], int this_idade){
    NO* novo = (NO*)malloc(sizeof(NO));
    if(novo == nullptr){
        cout<<"Pilha vazia"<<endl;
        return;
    }

    int i;
    for(i = 0; this_nome[i] != '\0'; i++){
        novo->nomes_no[i] = this_nome[i];
    }
    novo->nomes_no[i] = '\0';   // ← TERMINADOR OBRIGATÓRIO
    novo->idades_no = this_idade;
    novo->prox = p.topo;
    p.topo = novo;

    cout<<"Nome: "<<novo->nomes_no<<" | Idade: "<<novo->idades_no<<endl;
}

int DesempilharPilha(Pilha &p){
    if(p.topo == nullptr){
        cout<<"Pilha vazia"<<endl;
        return -1;
    }

    NO* aux = p.topo;
    p.topo = aux->prox;

    cout<<"Nome: "<<aux->nomes_no<<" | Idade: "<<aux->idades_no<<endl;

    int idade = aux->idades_no;
    free(aux);
    return idade;
}

void Imprime(Pilha &p){
    if(p.topo == nullptr){
        cout<<"Pilha vazia"<<endl;
        return;
    }

    NO* aux = p.topo;
    while(aux != nullptr){
        cout<<"Nome: "<<aux->nomes_no<<" | Idade: "<<aux->idades_no<<endl;
        aux = aux->prox;
    }
}

int main(){
    Pilha p;
    InicializarPilha(p);

    char nome1[30] = "Carlos";
    char nome2[30] = "Maria";
    char nome3[30] = "Joao";

    EmpilharPilha(p, nome1, 20);
    EmpilharPilha(p, nome2, 30);
    EmpilharPilha(p, nome3, 40);

    cout<<"\nImprimindo pilha:\n";
    Imprime(p);

    cout<<"\nDesempilhando:\n";
    DesempilharPilha(p);
    DesempilharPilha(p);

    cout<<"\nImprimindo pilha novamente:\n";
    Imprime(p);

    return 0;
}
