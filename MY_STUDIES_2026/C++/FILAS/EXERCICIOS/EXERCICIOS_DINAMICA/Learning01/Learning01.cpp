/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world./*Faça um programa que cadastre as notas de uma classe. 
A entrada será finalizada com a digitação de uma nota menor que 0.
As notas devem ser armazenados em uma fila. 
A saída do programa deve apresentar as notas e a média. 
Caso a fila seja vazia, deve-se mostrar a mensagem.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct NO{
    double notas;
    NO* prox;
}NO;

typedef struct Cadastro{
    NO* inicio;
    NO* fim;
}Cadastro;

void Inicializar(Cadastro *p){
    p->inicio=NULL;
    p->fim=NULL;
}

void Enfileirar(Cadastro *p, double x){
    NO* ptr = (NO*)malloc(sizeof(NO));
    if(ptr==NULL){
        cout<<"ERRO"<<endl;
        return;
    }
    ptr->notas=x;
    ptr->prox=NULL;
    if(p->inicio==NULL){
        p->inicio=ptr;
        p->fim=ptr;
    }
    else{
    p->fim->prox=ptr;
    p->fim=ptr;
    }
}

void Exibir(Cadastro *p){
    NO* ptr=p->inicio;
    double temp=0;
    int n=0;
    
    if(ptr==NULL){
        cout<<"Fila vazia!"<<endl;
        return;
    }
    while(ptr!=NULL){
        cout<<ptr->notas<<" ";
        temp+=ptr->notas;
        ptr=ptr->prox;
        n++;
    }
    cout<<"\nMédia: "<<(double)temp/n<<endl;
}

int main(){
    cout<<"CADASTRO DE NOTAS"<<endl;
    Cadastro p;
    Inicializar(&p);
    while(true){
        double nota;
        cout<<"INSIRA UMA NOTA: "; cin>>nota;
        if(nota>0){
        Enfileirar(&p,nota);
        }
        else if(nota<0){
            cout<<"Encerrando programa"<<endl;
            cout<<"\n=================NOTAS==================\n";
            Exibir(&p);
            break;
        }
        else{
            cout<<"Valor inválido"<<endl;
            break;
        }
        
    }
}

