/*Faça um programa que receba N números 
inteiros em uma Pilha e imprima os números 
impares e a média deles. Faça o mesmo para os números pares.
*/

#include <iostream>
using namespace std;
const int N=10;
typedef struct Pilha{
    int topo;
    int value[N];
}Pilha;

void Inicializar(Pilha *p){
    p->topo=0;
    for(int i=0; i<N; i++){
        p->value[i]=0;
        }
}

void Empilhar(Pilha *p, double x){
    if(p->topo==N){
        cout<<"Pilha cheia"<<endl;
        return;
    }
    p->value[p->topo]=x;
    p->topo++;
}

double Desempilhar(Pilha *p){
    if(p->topo==0){
        cout<<"Pilha vazia!"<<endl;
        return -1;
    }
    p->topo--;
    double aux=p->value[p->topo];
    return aux;
}

void ParImpar(Pilha *p){
    cout<<"\n=====PARES=====\n";
    double par=0;
    for(int i=0; i<p->topo; i++){
    
        if((p->value[i])%2==0){
            cout<<p->value[i];
            if(i<p->topo-2){
                cout<<" ; ";
            }
            par+=p->value[i];
        }
        
    }
    
    cout<<"\n=====IMPARES=====\n";
    double impar=0;
    for(int i=0; i<p->topo; i++){
    
        if(p->value[i]%2!=0){
            cout<<p->value[i];
            if(i<p->topo-2){
                cout<<" ; ";
            }
            impar+=p->value[i];
        }
        
    }
    cout<<endl;
    cout<<"\nMédia Par: "<<double(par/p->topo)<<endl<<endl;
    cout<<"Média Impar: "<<double(impar/p->topo)<<endl;
    
}

int main(){
    Pilha p;
    Inicializar(&p);
    Empilhar(&p,1);
    Empilhar(&p,2);
    Empilhar(&p,3);
    Empilhar(&p,4);
    Empilhar(&p,5);
    Empilhar(&p,6);
    Empilhar(&p,7);
    Empilhar(&p,8);
    Empilhar(&p,9);
    Empilhar(&p,10);
    ParImpar(&p);
   
}
